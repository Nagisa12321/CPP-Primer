#include <iostream>

class A { };

class B : public A { };


template<typename T>
struct holder {
    T* value;

    holder ( T*value ) : value ( value ) { }

    template < typename U > // class T : public U
    operator holder<U> () const
    {
        return holder<U>( value );
    }
};


int main ()
{
    using namespace std;

    B   b;

    holder<B>   hb ( &b );
    holder<A>   ha  = hb;

    cout << boolalpha;

    cout << ( hb.value == ha.value ) << endl;

    return 0;
}