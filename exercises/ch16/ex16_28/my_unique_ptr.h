#ifndef MY_UNIQUE_PTR_H
#define MY_UNIQUE_PTR_H

class default_deleter {
public:
    template <typename _PointerType> 
    void operator()(_PointerType *p) const { delete p; }
};

template <typename T, typename _Deleter = default_deleter>
class my_unique_ptr {
public:
    my_unique_ptr(T *t);
    my_unique_ptr(T *t, _Deleter deleter);
    my_unique_ptr(const my_unique_ptr &) = delete;
    my_unique_ptr(my_unique_ptr &&);

    T &operator*();
    const T &operator*() const;
    T *operator->();
    const T *operator->() const;
    operator bool() const;
private:

};

#endif // MY_UNIQUE_PTR_H
