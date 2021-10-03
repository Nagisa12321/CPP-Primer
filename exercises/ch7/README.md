## Exercises 7.1
## Exercises 7.2
## Exercises 7.3
## Exercises 7.4
## Exercises 7.5
## Exercises 7.6
## Exercises 7.7
## Exercises 7.8
- because `read` will change the `data`
## Exercises 7.9
## Exercises 7.10
```c++
if (read(read(cin, data1), data2));
```
- firstly read the data1, and secondly read the data2;

## Exercises 7.11
## Exercises 7.12
## Exercises 7.13
## Exercises 7.14
## Exercises 7.15
## Exercises 7.16
- There are no restrictions on how often an access specifier may appear.The specified access level remains in effect until the next access specifier or the end of the class body.

- The members which are accessible to all parts of the program should define after a public specifier.

- The members which are accessible to the member functions of the class but are not accessible to code that uses the class should define after a private specifier.

## Exercises 7.17
- struct: default access -- public
- class: default access -- private

## Exercises 7.18
- Important advantages:
  - User code cannot inadvertently corrupt the state of an encapsulation object.
  - The implementation of an encapsulated class can change over time without requiring changes in user-level code.

## Exercises 7.19
- public: get_name(); get_address();
- private: the string of name and address;

## Exercises 7.20
- friend is a mechanism by which a class grants access to its nonpublic members. They have the same rights as members.

- Pros:
    - the useful functions can refer to class members in the class scope without needing to explicitly prefix them with the class name.
    you can access all the nonpublic members conveniently.
    sometimes, more readable to the users of class.
- Cons: 
    - lessens encapsulation and therefore maintainability.
    code verbosity, declarations inside the class, outside the class.

## Exercises 7.21
## Exercises 7.22
## Exercises 7.23
## Exercises 7.24
## Exercises 7.22
- The class below can rely on it.

## Exercises 7.23
## Exercises 7.24
## Exercises 7.25
## Exercises 7.26
## Exercises 7.27
## Exercises 7.28
- It is like to do 
```c++
screen my_screen(5, 5, 'X');
screen tmp1 = my_screen.move(4, 0);
screen tmp2 = tmp1.set('#');
tmp2.display(cout);

my_screen.display();
```
- so we can see 2 different results!

## Exercises 7.29
## Exercises 7.30
**Pros**

- more explicit
- less scope for misreading
- can use the member function parameter which name is same as the member name.

        void setAddr(const std::string &addr) { this->addr = addr; }

**Cons**

- more to read
- sometimes redundant

        std::string getAddr() const { return this->addr; } // unnecessary

## Exercises 7.31
## Exercises 7.32
## Exercises 7.33
```c++
inline screen::pos screen::size() const {
    return width * height;
}

```
## Exercises 7.34
- can't find `pos`
## Exercises 7.35
## Exercises 7.36
## Exercises 7.37
## Exercises 7.38
## Exercises 7.39
- no
## Exercises 7.40
## Exercises 7.41
## Exercises 7.42
## Exercises 7.43
## Exercises 7.44
## Exercises 7.45
- ok

## Exercises 7.46
- (a): no
- (b): no
- (c): no
- (d): no

## Exercises 7.47
- maybe it should be!

## Exercises 7.48

## Exercises 7.49
```c++
// (a) - make a tmp 'Sales_data' 
Sales_data &combine(Sales_data);
// (b) - error
Sales_data &combine(Sales_data&);
// (c) - error
Sales_data &combine(Sales_data&) const;
```

## Exercises 7.50
## Exercises 7.50
## Exercises 7.51
## Exercises 7.52
```c++ 
Sales_data item = {"10086", 25, 15.99};
```

## Exercises 7.53
## Exercises 7.54
## Exercises 7.55
