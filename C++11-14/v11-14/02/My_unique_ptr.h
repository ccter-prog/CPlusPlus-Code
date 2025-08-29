#pragma once

template <typename T>
class My_unique_ptr
{
    public:
        explicit My_unique_ptr(T* p) : ptr(p) {}
        My_unique_ptr() : ptr(nullptr) {}
        ~My_unique_ptr() { delete ptr; }
        My_unique_ptr(const My_unique_ptr&) = delete;
        My_unique_ptr(My_unique_ptr&& obj) noexcept : ptr(obj.ptr)
        {
            obj.ptr = nullptr;
        }

        My_unique_ptr& operator=(My_unique_ptr&& obj) noexcept
        {
            if (this != &obj)
            {
                delete ptr;
                ptr = obj.ptr;
                obj.ptr = nullptr;
            }
            return *this;
        }

        T* operator->() const { return ptr; }
        T& operator*() const { return *ptr; }
        My_unique_ptr& operator=(const My_unique_ptr&) = delete;
    public:
        T* get() const { return ptr; }
        T* release()
        {
            T* temp = ptr;
            ptr = nullptr;
            return temp;
        }
        void reset()
        {
            delete ptr;
            ptr = nullptr;
        }
        void reset(T* obj)
        {
            if (ptr != obj)
            {
                delete ptr;
                ptr = obj;
            }
        }
    private:
        T* ptr;
};