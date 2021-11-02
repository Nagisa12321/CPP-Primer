#ifndef _MY_UNIQUE_PTR_H_
#define _MY_UNIQUE_PTR_H_

class my_unique_ptr {
public:
    my_unique_ptr();
    my_unique_ptr(int *);
    my_unique_ptr(const my_unique_ptr &) = delete;
    my_unique_ptr(my_unique_ptr &&) noexcept;
    ~my_unique_ptr();

    my_unique_ptr &operator=(const my_unique_ptr &) = delete;
    int &operator*();

    int *release(); 
    void reset(int * = nullptr);

private:
    int     *p;
};

#endif 