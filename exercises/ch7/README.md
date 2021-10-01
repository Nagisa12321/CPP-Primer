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
