## Exercises 2.1
- different between `int`, `long`, `long long`, `short`?
    - short: 16 bit
    - int: unless 16 bit
    - long: int 32 bit computer: 32 bit, 64 bit computer: 64 bit.
    - long long: always 64 bit

- different between `unsigned` and `signed` ? 
    - unsigned: all the bit represent to the number
    - signed: has a bit represent the Positive and negative

- different between `float` and `double` ? 
    - float: a word.
    - double: two word.

## Exercises 2.2
- double/float

## Exercises 2.3/2.4

## Exercises 2.5
- (a)
    - 'a': char
    - L'a': wchar_t
    - "a": const char[2]
    - L"a": const wchar_t[2]
- (b)
    - 10: int
    - 10u: unsiged int
    - 10L: long 
    - 10LL: long long
    - 10uL: unsiged long 
    - 012: 10(int)
    - 0xC: 12(int)
- (c)
    - 3.14: double 
    - 3.14f: float
    - 3.14L: long double 
- (d)
    - 10: int
    - 10u: unsiged int
    - 10.: double
    - 10e-2: double (10^(-2))

## Exercises 2.6
```c
int month = 9, day = 7;
int month = 09/*error*/, day = 07;
```

## Exercises 2.7
- (a)
    - `"Who goes with F\145rgus?\012"`
    - \145:e
    - \012:\n
- (b)
    - `3.14e1L`
    - long double
- (c)
    - 1024f
    - error
- (d)
    - 3.14L
    - long double

## Exercises 2.8

## Exercises 2.9
- (a)
```c++
// std::cin >> int input value;
int input_value;
std::cin >> input value;
```
- (b)
```c++
int i = { 3.14 };
```
- (c)
```c++
// double salary = wage = 9999.9
double warge;
double salary = warge = 9.99;
```
- (d)
```c++
int i = 3.14;
```