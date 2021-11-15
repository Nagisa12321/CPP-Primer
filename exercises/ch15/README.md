## Exercises 15.1
- the base class's function that [ want the children class to override it ]
- A virtual member in a base class expects its derived class define its own version. In particular base classes ordinarily should define a virtual destructor, even if it does no work.

## Exercises 15.2
- private: ohter class can not access
- protected: only the derived class can access

## Exercises 15.3
## Exercises 15.4
```c++
class Base { /* .... */ };

// (a)
class Derived : public Base { /* ... */ };
class Derived : private Base { /* ... */ };  // error
class Derived : public Base;                 // error
```

## Exercises 15.5
## Exercises 15.6
## Exercises 15.7
## Exercises 15.8
- The static type of an expression is always known at compile time.
- The dynamic type is the type of the object in memory that the variable or expression represents. The dynamic type may not be known until run time.

## Exercises 15.9
- use the ref or pointer of the base class

```c++
class Foo1 { /* ... */ };
class Foo2 : public Foo1 { /* ... */ };

// ...

Foo2 foo2;
Foo1 &foo_ref = foo2;
Foo1 &foo_pointer = &foo2;

```

## Exercises 15.10`
- `ifstream` -> `istream &`

## Exercises 15.11
## Exercises 15.12
- yes: override means rewrite the base class's function.
- but final means my children can not rewrite my function


## Exercises 15.13
## Exercises 15.14
## Exercises 15.15
## Exercises 15.16
## Exercises 15.17
```
error: cannot declare variable ‘d’ to be of abstract type ‘disc_quote’
```


## Exercises 15.18

```c++
Base *p = &d1; 
p = &d2;        // error
p = &d3;        // error
p = &dd1;       
p = &dd2;       // error
p = &dd3;       // error
```

## Exercises 15.19
- Pub_Derv: ok
- Priv_Derv: ok
- Prot_Derv: ok
- Derived_from_Public: ok
- Derived_from_Private: no
- Derived_from_Protected: ok

## Exercises 15.20
## Exercises 15.21
## Exercises 15.22
## Exercises 15.23
- `using base::fcn;` or `int fcn()`

## Exercises 15.24
- base class 
- Using virtual destructors, you can destroy objects without knowing their type — the correct destructor for the object is invoked using the virtual function mechanism. Note that destructors can also be declared as pure virtual functions for abstract classes

## Exercises 15.25
- can not write a constructor for `bulk_quote`