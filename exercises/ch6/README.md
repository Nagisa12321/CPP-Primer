## Exercises 6.1
- **Parameters**: Local variable declared inside the function parameter list. they are initialized by the arguments provided in the each function call.
- **Arguments**: Values supplied in a function call that are used to initialize the function's parameters.

## Exercises 6.2
```c++
// (a)
int f() {
    string s;
    // ... 
    // return the error type
    return s;
}

// (b)
// miss the return type
f2(int i) { /* .... */ }

// (c)
int calc(int v1, int v1) {
    /* has two 'v1' */
} 

// (d)
double square(double x)
    return x * x;
// miss the '{', '}'
```

## Exercises 6.3
## Exercises 6.4
## Exercises 6.5
## Exercises 6.6
## Exercises 6.7
## Exercises 6.8
## Exercises 6.9
## Exercises 6.10
## Exercises 6.11
## Exercises 6.12
## Exercises 6.13
- copy and ref
## Ecercises 6.14 
- maybe the reset and add.
## Exercises 6.15
- why is s a reference to const but occurs is a plain reference?
    - Because s should not be changed by this function, but occurs result must be calculated by the function.
- Why are these parameters references, but the char parameter c is not?
    - Because c may be a temp varable, such as find_char(s, 'a', occurs)
- What would happen if we made s a plain reference? What if we made occurs a reference to const?
    - s could be changed in the function, and occurs would not be changed. so occurs = 0; is an error.