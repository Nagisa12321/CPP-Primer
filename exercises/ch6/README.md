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

## Exercises 6.16
```c++
bool is_empty(const string &s) { return s.empty(); }
```

## Exercises 6.17

## Exercises 6.18
```c++
// (a)
bool compare(matrix &m1, matrix &m2);

// (b)
vector<int>::iterator change_val(int val, vector<int>::iterator it);
```

## Exercises 6.19
```c++
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

// (a)
calc(23.4, 55.1); // to much ....

// (b) - right
count("abcda", 'a');

// (c) - right
calc(66);

// (d) - right
sum(vec.begin(), vec.end(), 3.8);
```

## Exercises 6.20
## Exercises 6.21
## Exercises 6.22
## Exercises 6.23
## Exercises 6.24
## Exercises 6.25
## Exercises 6.26
## Exercises 6.27
## Exercises 6.28
- const string &
## Exercises 6.29
- depending on the type is PODType or not.
## Exercises 6.30
## Exercises 6.31
## Exercises 6.32
## Exercises 6.33
## Exercises 6.34
- return 0
- stack overflow
## Exercises 6.35
## Exercises 6.36
## Exercises 6.37
## Exercises 6.38
## Exercises 6.39
```c++
// (a)
int calc(int, int);
int calc(const int, const int); // error

// (b)
int get();
double get(); // error

// (c)
int *reset(int *);
double *reset(double *);
```

## Exercises 6.40
```c++
// (a) - ok
int ff(int a, int b = 0, int c = 0);

// (b) - error
int *init(char ht = 24, int wd, char bk);

```

## Exercises 6.41
```c++
// (a) error
init();

// (b) ok
init(24, 10);

// (c) ok but init(24, 10, '*')
init(14, '*')

```

## Exercises 6.42
## Exercises 6.43
- a;
## Exercises 6.44
## Exercises 6.45
## Exercises 6.46
## Exercises 6.47
## Exercises 6.48
## Exercises 6.49
- candidate function:

    - Set of functions that are considered when resolving a function call. (all the functions with the name used in the call for which a declaration is in scope at the time of the call.)

- viable function:

    - Subset of the candidate functions that could match a given call. It have the same number of parameters as arguments to the call, and each argument type can be converted to the corresponding parameter type.

## Exercises 6.50
```c++
void f();                       // 1
void f(int);                    // 2
void f(int, int);               // 3    
void f(double, double = 3.14);  // 4

// (a) - error
f(2.56, 42);

// (b) - 2
f(42); 

// (c) - 3
f(42, 0);

// (d) - 4
f(2.56, 3.14);
```

## Exercises 6.51
## Exercises 6.52
```c++
void manip(int, int);
double dobj;

// (a) - level3
manip('a', 'z');

// (b) - lavel4
manip(55.4, dobj);
```

## Exercises 6.53
```c++
// (a)
int calc(int&, int&);
int calc(const int &, const int &);

// (b)
int calc(char *, char *);
int calc(const char *, const char *);

// (c) - error
int calc(char *, char *);
int calc(char *const, char *const);
```

## Exercises 6.54
## Exercises 6.55
## Exercises 6.56
