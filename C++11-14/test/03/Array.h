#ifndef __Array_H__
#define __Array_H__

template <typename T>
class Array
{
    public:
        // 以下为特殊成员函数
        Array() : m_arr(nullptr), m_size(1), m_index(0) {}
        Array(const T yuansu);
        Array(const Array& obj);
        virtual ~Array();
        
        // 以下为运算符重载
        T& operator[](int index) { return m_arr[index]; }
        T& operator*() { return m_arr[0]; }
        T& operator*(const int& p) { return m_arr[p]; }
        Array& operator=(Array& obj);
        bool operator==(const Array& obj);
    public:
        // 以下为普通函数
        Array& push_back(const T num);
        int length(const Array& obj) { return obj.m_size; }
    private:
        T* m_arr;
        int m_size;
        int m_index;
};

template <typename T>
inline Array<T>::Array(const T yuansu) : m_arr(nullptr), m_size(1), m_index(0)
{
    push_back(yuansu);
}

template <typename T>
inline Array<T>::Array(const Array<T>& obj)
{
    m_size = obj.m_size;
    m_index = obj.m_index;
    m_arr = new T[(unsigned long)m_size];
    for (int i = 0; i < m_size; i++)
    {
        m_arr[i] = obj.m_arr[i];
    }
}

template <typename T>
inline Array<T>& Array<T>::operator=(Array<T>& obj)
{
    if (obj.m_arr)
    {
        delete[] m_arr;
        obj.m_arr = nullptr;
    }
    obj.m_size = m_size;
    obj.m_arr = new T[(unsigned long)obj.m_size];
    for (int i = 0; i < m_size; i++)
    {
        obj.m_arr[i] = m_arr[i];
    }
    return *this;
}

template <typename T>
inline Array<T>& Array<T>::push_back(const T num)
{
    if (!m_arr || m_index == m_size)
    {
        T* p = m_arr;
        m_size *= 2;
        m_arr = new T[(unsigned long)m_size];
        for (int i = 0; p && i < m_size; i++)
        {
            m_arr[i] = p[i];
        }
        delete[] p;
    }
    m_arr[m_index] = num;
    m_index++;
    return *this;
}

template <typename T>
inline bool Array<T>::operator==(const Array<T>& obj)
{
    bool ret = true;
    for (int i = 0; m_index == obj.m_index && i < m_index; i++)
    {
        if (m_arr[i] != obj.m_arr[i])
        {
            ret = false;
            break;
        }
    }
    return ret;
}

template <typename T>
inline Array<T>::~Array()
{
    if (m_arr)
    {
        delete[] m_arr;
    }
    m_arr = nullptr;
}

#endif