#pragma once

#include <cstddef>

template <typename T>
class My_shared_ptr
{
    public:
        My_shared_ptr() : cb(nullptr) {}
        ~My_shared_ptr()
        {
            release();
        }

        explicit My_shared_ptr(T* p) : cb(p ? new ControlBlock(p) : nullptr) {}
        My_shared_ptr(const My_shared_ptr& obj) : cb(obj.cb)
        {
            if (cb)
            {
                cb -> count++;
            }
        }

        My_shared_ptr(const My_shared_ptr&& obj) noexcept : cb(obj.cb) { obj.cb = nullptr; }
        My_shared_ptr& operator=(const My_shared_ptr& obj)
        {
            if (this != &obj)
            {
                release();
                cb = obj.cb;
                if (cb)
                {
                    cb -> count++;
                }
            }
            return *this;
        }

        My_shared_ptr& operator=(My_shared_ptr&& obj) noexcept
        {
            if (this != &obj)
            {
                release();
                cb = obj.cb;
                obj.cb = nullptr;
            }
            return *this;
        }

        T& operator*() const { return *(cb -> ptr); }
        T* operator->() const { return cb -> ptr; }
    public:
        size_t use_count() const { return cb ? cb -> count : 0; }
        T* get() const { return cb ? cb -> ptr : nullptr; }
        void reset()
        {
            release();
        }

        void reset(T* p)
        {
            if (p)
            {
                release();
                cb = new ControlBlock(p);
            }
        }
    private:
        struct ControlBlock
        {
            T* ptr;
            size_t count;

            ControlBlock(T* p) : count(1), ptr(p) {}
        };
        ControlBlock* cb;
    private:
        void release()
        {
            if (cb)
            {
                cb -> count--;
                if (!(cb -> count))
                {
                    delete cb -> ptr;
                    delete cb;
                }
                cb = nullptr;
            }
        }
};