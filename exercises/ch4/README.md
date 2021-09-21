## Exercises 4.1

## Exercises 4.2
```c++
// (a)
*vec.begin();
*(vec.begin());

// (b)
*vec.begin() + 1;
(*(vec.begin())) + 1;
```

## Exercises 4.3

## Exercises 4.4

## Exercises 4.5

## Exercises 4.6

## Exercises 4.7

## Exercises 4.8
- \>, <, ==  --->>  &&, ||

## Exercises 4.9
## Exercises 4.10
## Exercises 4.11
## Exercises 4.12
- if j < k, then if i != 1, the expr is true
- if j >= k, then if i != 0, the expr is true

## Exercises 4.13
## Exercises 4.14
## Exercises 4.15
## Exercises 4.16
```c++
// (a) 
if (p = getPtr() != 0) {
    // ... 
}

if ((p = getPtr()) != 0) {
    // ... 
}

// (b)
if (i = 1024) {
    // ... 
}

if (i == 1024) {
    // ... 
}
```

## Exercises 4.17
- ++i, add the val of i, and return it;
- i++, store the value of i named tmp, add i, and return tmp;
- https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i