## Exercises 16.1
- When the compiler instantiates a template, it uses the actual template parameters instead of the corresponding template parameters to create a new "instance" of the template.

## Exercises 16.2
## Exercises 16.3
## Exercises 16.4
## Exercises 16.5
## Exercises 16.6
## Exercises 16.7
- because some class may not have `operator<`

## Exercises 16.8

## Exercises 16.9
- A function template is a formula that can be used to generate a function version for a specific type. The class template is used to generate the blueprint of the class. The difference from the function template is that the compiler cannot infer the template parameter types for the class template. If we have seen it many times, in order to use a class template, we must provide additional information in angle brackets after the template name.

## Exercises 16.10
- the complier will rewrite the template, change the `T` to the real type 

## Exercises 16.11
## Exercises 16.12
## Exercises 16.13
- 1 <=> 1
## Exercises 16.14
## Exercises 16.15
## Exercises 16.16

## Exercises 16.17
- When using template members, because the compiler does not have the definition of the template, when the members used are types, typename should be used to remind the compiler

## Exercises 16.17
```c++
// a
template <typename T, U, typename V> void f1(T, U, V);  // error
template <typename T, typename U, typename V> void f1(T, U, V);

// b 
template <typename T> T f2(int &T); // error
template <typename T> T f2(int &i); 

// c
inline template <typename T> T foo(T, unsigned int *);  // error
template <typename T> inline T foo(T, unsigned int *);

// d 
template <typename T> f4(T, T); // error
template <typename T> T f4(T, T);

// f
typedef char Ctype;
template <typename Ctype> Ctype f5(Ctype a)
```

## Exercises 16.18
## Exercises 16.19
## Exercises 16.20
## Exercises 16.21
## Exercises 16.22
## Exercises 16.23
- just one delete because .... 

## Execises 16.24
- Declare the string version of the template class
- Fully instantiate the Sales_data version of the template class