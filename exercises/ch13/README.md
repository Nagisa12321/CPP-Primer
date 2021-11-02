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

## Exercises 13.8
## Exercises 13.9
- The destructor is a member function with the name of the class prefixed by a tilde(~).
- do nothing. 
- The compiler defines a synthesized destructor for any class that does not define its own destructor.

## Exercises 13.10
- StrBlob: run the destructor, but nothing to do, then destory the member, it will run the destructor of shared_ptr, decrease the number of use_count when the use count is 0, delete the pointer. 
- StrBlobPtr: ...., run the destructor of weak_ptr, but do nothing. 

## Exercises 13.11
## Exercises 13.12
## Exercises 13.13
## Exercises 13.14
- output is the same sync

## Exercises 13.15
- Yes, maybe 3 different numbers. 

## Exercises 13.16
- Yes, maybe 3 different numbers. 

## Exercises 13.17
## Exercises 13.18
## Exercises 13.19
- do not need. 


## Exercises 13.20
- text_query
  - copy: copy the shared_ptr, increase the use_count, copy the map(copy key and value, ....)
  - opt=: same of copy
  - destory: exec ~text_query(), but do nothing, and destory map, share_ptr, ... (something about shared_ptr)

- query_result
  - ....

## Exercises 13.21
- text_query: all is =delete;
- query_result: can make it!

## Exercises 13.22
## Exercises 13.23
- It's important to copy to a `tmp`

## Exercises 13.24
- If did not have a destructor, can not delete the *sp;
- If did not have a copy constructor, double free will happen...

## Exercises 13.25
## Exercises 13.26
## Exercises 13.27
## Exercises 13.28
## Exercises 13.29
- Because HasPtr does not have a PasPtr member

## Exercises 13.30
## Exercises 13.31
## Exercises 13.32
- I think it's same

## Exercises 13.33
- Folder: will copy the folder, and then destory it, so the set of folders is fill with SHIT.
- const Folder &: can not call add_message.

## Exercises 13.34
## Exercises 13.35
- will not copy the message

## Exercises 13.36
## Exercises 13.37
## Exercises 13.38
-  In this case, swap function is special. It will be clear two Message's folders , then swap members, and added themselves to each folders. But, Message assignment operator just clear itself, and copy the members, and added itself to each folders. The rhs don't need to clear and add to folders. So, if using copy and swap to define, it will be very inefficiency.
## Exercises 13.39
## Exercises 13.40
## Exercises 13.41
- unconstruct

## Exercises 13.42
## Exercises 13.43
## Exercises 13.44
## Exercises 13.45
- lvalue reference: reference that can bind to an lvalue. (Regular reference)
- rvalue reference: reference to an object that is about to be destroyed.

## Exercises 13.46
## Exercises 13.47
## Exercises 13.48
## Exercises 13.49
- add in the old code.  

## Exercises 13.50
- when reallocate. 

## Exercises 13.51
## Exercises 13.52
```c++
h2 = h1;  /* copy */

```

## Exercises 13.53
- will make a new string; and delete the old;

## Exercises 13.54
## Exercises 13.55
- add to the old code 

## Exercises 13.56
- not end loop: stack overflow

## Exercises 13.57 
- make a Foo with copy-constructor
- call the rvalue sort; 