## Exercises 13.1
- A copy constructor is a constructor which first parameter is a reference to the class type and any additional parameters have default values.

## Exercises 13.2
- If declaration like that, the call would never succeed to call the copy constructor, Sales_data rhs is an argument to a parameter, thus, we'd need to use the copy constructor to copy the argument, but to copy the argument, we'd need to call the copy constructor, and so on indefinitely.

## Exercises 13.3
- StrBlob: copy the shared_ptr of data;
- StrBlobPtr: copy 2 ptrs and the `curr`;

## Exercises 13.4
```c++
Point global;
Point foo_bar(Point arg/* copy */) {
    Point local = arg/* copy */, *heap = new Point(global)/* copy */;
    *heap = global;
    Point pa[4] = { local, *heap };/* copy */
    return *heap;/* copy */
}
```

## Exercises 13.5
## Exercises 13.6
- The copy-assignment operator is function named operator= and takes an argument of the same type as the class.
- This operator is used when assignment occurred.
- The synthesized copy-assignment operator assigns each nonstatic member of the right-hand object to corresponding member of the left-hand object using the copy-assignment operator for the type of that member.
- It is synthesized when the class does not define its own.

## Exercises 13.7
- StrBlob: copy the shared_ptr, the used_count += 1;
- StrBlobPtr: copy the weak_ptr, nothing change. 