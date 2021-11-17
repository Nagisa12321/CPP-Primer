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

## Exercises 15.26
## Exercises 15.27
## Exercises 15.28
## Exercises 15.29
## Exercises 15.30
## Exercises 15.31
## Exercises 15.32
- Query:
  - copy: do the shared_ptr<base_query> copy.
  - move: do the shared_ptr<base_query> move. exchange the pointer
  - opt=: do the shared_ptr<base_query> opt=;
  - destory: if the use_count of the shared_ptr<base_query>, the obj will be delete

## Exercises 15.33
- The Query_base here is an abstract base class, which cannot be used directly to generate corresponding objects.
- So the next few questions cannot be answered.

## Exercises 15.34
- (a)
    ```c++
    query q = query("fiery") & query("bird") | query("wind");
    // query(const string &word);                                           3 times
    // word_query(const std::string &word)                                  3 times 
    // binary_query(const query &q1, const query &q2, std::string m_opt);   2 times
    // and_query(const query &q1, const query &q2);                         1 times
    // query::query(std::shared_ptr<query_base> query);                     2 times
    // or_query(const query &q1, const query &q2);                          1 times
    // query(const query &);                                                1 times

    ```
- (b)
    - `cout << q` will call `m_p_qb->rep();`
    - and the `m_p_qb` now is `or_query` 
    - so the `std::string binary_query::rep() const;` will be called;

- (c)
    - now the `q` is `or_query` so will call `query_result or_query::eval(text_query &tq);`

## Exercises 15.35
## Exercises 15.36
## Exercises 15.37
- nothing to do.

## Exercises 15.38
## Exercises 15.39
## Exercises 15.40
- rhs is empty: return a query_result that equal to lhs;
- all empty: return the query_result that is empty;
## Exercises 15.41
## Exercises 15.42
