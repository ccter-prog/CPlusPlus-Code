#ifndef __Array_H__
#define __Array_H__

#include <cstddef>
#include <memory>
#include <utility>
#include <initializer_list>
#include <type_traits>

template <typename T>
class Array
{
    public:
        // 类型别名
        using iterator = T*;
        using const_iterator = const T*;
    public:
        // 以下为特殊成员函数
        Array() : m_data(nullptr), m_capacity(1), m_size(0) {}
        Array(const T value) : m_data(nullptr), m_capacity(1), m_size(0) { push_back(value); }
        Array(const Array& obj);
        Array(Array&& other) noexcept;
        Array(const std::initializer_list<T>& value) : m_data(nullptr), m_capacity(1), m_size(0) { push_back(value); }
        ~Array() {}
        
        // 以下为运算符重载
        T& operator[](size_t index) { return m_data[index]; }
        const T& operator[](size_t index) const { return m_data[index]; }
        Array& operator=(const Array& obj);
        bool operator==(const Array& obj) const;
        Array& operator=(Array&& other) noexcept;
    public:
        // 以下为普通函数
        Array& push_back(const T value);
        size_t length() { return m_size; }
        iterator begin() { return m_data.get(); }
        iterator end() { return m_data.get() + m_size; }
        const_iterator begin() const { return m_data.get(); }
        const_iterator end() const { return m_data.get() + m_size; }
        const_iterator cbegin() const { return m_data.get(); }
        const_iterator cend() const { return m_data.get() + m_size; }
        void erase(size_t index);
        iterator erase(iterator position);
        void resize(size_t new_size, const T& value = T());
        Array& push_back(const std::initializer_list<T>& value);
        iterator insert(iterator position, const T& value);
        void shrink_to_fit();
        void shrink_to_fit(bool keep_buffer);
    public:
        // 模板函数
        template <typename... Args>
        T& emplace_back(Args&&... args);
    private:
        void reserve(size_t new_capacity);
    private:
        std::unique_ptr<T[]> m_data;  // 数据存储指针
        size_t m_capacity;  // 数组容量
        size_t m_size;  // 当前元素数量
};

template <typename T>
inline Array<T>::Array(const Array<T>& obj) : m_data(nullptr), m_size(obj.m_size), m_capacity(1)
{
    reserve(obj.m_capacity);
    for (size_t i = 0; i < m_size; i++)
    {
        m_data[i] = obj.m_data[i];
    }
}

template <typename T>
inline Array<T>::Array(Array&& other) noexcept : m_data(std::move(other.m_data)), m_capacity(other.m_capacity), m_size(other.m_size)
{
    other.m_capacity = 0;
    other.m_size = 0;
}

template <typename T>
inline Array<T>& Array<T>::operator=(const Array<T>& obj)
{
    m_data.reset();
    reserve(obj.m_capacity);
    m_size = obj.m_size;
    for (size_t i = 0; i < m_size; i++)
    {
        m_data[i] = obj.m_data[i];
    }
    return *this;
}

template <typename T>
inline Array<T>& Array<T>::push_back(const T value)
{
    if (!m_data || m_capacity == m_size)
    {
        reserve(m_capacity * 2);
    }
    m_data[m_size] = value;
    m_size++;
    return *this;
}

template <typename T>
inline Array<T>& Array<T>::push_back(const std::initializer_list<T>& value)
{
    size_t temp_size = value.size();

    // for (auto i : value)  // 循环获取value里面的元素数量
    // {
    //     temp_size++;
    // }

    if (!m_data || temp_size + m_size > m_capacity)
    {
        reserve(temp_size + m_size);
    }
    size_t i = m_size;  // 初始化i为m_size也就是有效元素的下一位
    for (auto& j : value)  // 将value循环一遍并进行拷贝
    {
        m_data[i] = j;
        m_size++;
        i++;
    }
    return *this;
}

template <typename T>
inline bool Array<T>::operator==(const Array<T>& obj) const
{
    bool ret = true;
    if (m_size != obj.m_size)
    {
        ret = false;
    }
    else
    {
        size_t i;
        for (i = 0; i < m_size && m_data[i] == obj.m_data[i]; i++);
        if (i != m_size) // 循环结束后如果两边的值相等的话，那么i应该等于m_size
        {
            ret = false;
        }
    }
    return ret;
}

template <typename T>
inline void Array<T>::reserve(size_t new_capacity)
{
    if (new_capacity <= m_capacity)  // 判断新的容量是否比旧的容量大
    {
        return;
    }
    std::unique_ptr new_data = std::make_unique<T[]>(new_capacity);
    if (m_data)  // 如果m_data不是空指针的话才需要数据迁移，循环条件i < m_size确保了不是空指针但里面没有元素的情况，这种概率很小
    {
        if constexpr (std::is_nothrow_move_constructible_v<T>)  // 如果类型支持不抛异常的移动构造，则使用移动语义
        {
            for (size_t i = 0; i < m_size; i++)
            {
                new_data[i] = std::move(m_data[i]);
            }
        }
        else
        {
            // 否则使用复制
            for (size_t i = 0; i < m_size; i++)
            {
                new_data[i] = m_data[i];
            }
        }
    }
    m_data.swap(new_data);
    m_capacity = new_capacity;
}

template <typename T>
inline Array<T>& Array<T>::operator=(Array&& other) noexcept
{
    if (this != &other)
    {
        m_data = std::move(other.m_data);
        m_capacity = other.m_capacity;
        m_size = other.m_size;
        other.m_capacity = 0;
        other.m_size = 0;
    }
    return *this;
}

template <typename T>
template <typename... Args>
inline T& Array<T>::emplace_back(Args&&... args)
{
    if (!m_data || m_size == m_capacity)
    {
        reserve(m_capacity * 2);
    }
    new(&m_data[m_size]) T(std::forward<Args>(args)...);
    m_size++;
    return m_data[m_size - 1];
}

template <typename T>
inline void Array<T>::erase(size_t index)
{
    if (index >= m_size)
    {
        return;
    }
    for (size_t i = index; i < m_size - 1; i++)
    {
        m_data[i] = std::move(m_data[i + 1]);
    }
    m_size--;
}

template <typename T>
inline typename Array<T>::iterator Array<T>::erase(typename Array<T>::iterator position)
{
    if (position < begin() || position >= end())
    {
        return nullptr;
    }
    for (iterator it = position; it < end(); it++)
    {
        *it = std::move(*(it + 1));
    }
    m_size--;
    return position;
}

template <typename T>
inline void Array<T>::resize(size_t new_size, const T& value)
{
    if (new_size > m_capacity)
    {
        reserve(new_size);
    }
    if (new_size > m_size)
    {
        for (size_t i = m_size; i < new_size; i++)  // 因为如果new_size大于m_capacity那么它就一定比m_size大，所以可以直接增加
        {
            m_data[i] = value;
        }
    }
    m_size = new_size;  // 无论new_size比m_size大或小或等于，最后都让它等于new_size
}

template <typename T>
inline typename Array<T>::iterator Array<T>::insert(typename Array<T>::iterator position, const T& value)
{
    if (position < begin() || position > end())
    {
        return nullptr;
    }
    size_t index = position - begin();
    if (!m_data || m_size == m_capacity)
    {
        reserve(m_capacity * 2);
        position = begin() + index;
    }
    if (index < m_size)  // 如果index比m_size小，说明是在数组中间插入，否则是在数组末尾插入
    {
        for (iterator it = end(); it != position; it--)
        {
            *it = std::move(*(it - 1));
        }
    }
    *position = value;
    m_size++;
    return position;
}

template <typename T>
inline void Array<T>::shrink_to_fit()
{
    if (m_size)
    {
        m_capacity = 1;  // 为了通过reserve的防守机制，最后会被改为m_size的值
        reserve(m_size);
    }
}

template <typename T>
inline void Array<T>::shrink_to_fit(bool keep_buffer)
{
    if (keep_buffer)
    {
        size_t new_size = (m_capacity / 2);
        if (new_size > m_size)
        {
            m_capacity = 1;  // 最后会被赋值为new_size
            reserve(new_size);
        }
    }
}

#endif