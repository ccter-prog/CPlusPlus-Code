#ifndef __Array_H__
#define __Array_H__

#include <cstddef>
#include <memory>
#include <utility>

template <typename T>
class Array
{
    public:
        // 以下为特殊成员函数
        Array() : m_data(nullptr), m_capacity(1), m_size(0) {}
        Array(const T value) : m_data(nullptr), m_capacity(1), m_size(0) { push_back(value); }
        Array(const Array& obj);
        Array(Array&& other) noexcept;
        ~Array() {}
        
        // 以下为运算符重载
        T& operator[](size_t index) { return m_data[index]; }
        Array& operator=(const Array& obj);
        bool operator==(const Array& obj) const;
        Array& operator=(Array&& other) noexcept;
    public:
        // 以下为普通函数
        Array& push_back(const T value);
        size_t length() { return m_size; }
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

#endif