## Exercises 11.1
- map is an associative container whereas vector is a sequence container

## Exercises 11.2 
## Exercises 11.3s
## Exercises 11.4 
## Exercises 11.5
- map has value but set has not... 

## Exercises 11.6
- set's value is single 

## Exercises 11.7
## Exercises 11.8
## Exercises 11.9
```c++
map<string, list<int>> words;
```
## Exercises 11.10
## Exercises 11.11
## Exercises 11.12
## Exercises 11.13
## Exercises 11.14
## Exercises 11.15
- `vector<int>`, `int` and `pair<const int, vector<int>>`
## Exercises 11.16
## Exercises 11.17
## Exercises 11.18
`map<string, int>::const_iterator`

## Exercises 11.19
-`multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)>::iterator it = bookstore.begin()`

## Exercises 11.20
## Exercises 11.21
```c++
while (cin >> word) {
    ++word_count.insert({word, 0}).first->second;
    // ++woord_count[word];
}
```

## Exercises 11.22
- `pair<string, vector<int>>`
- `pair<map<string, vector<int>>::iterator, bool>`

## Exercises 11.23
## Exercises 11.24
## Exercises 11.25
## Exercises 11.26
## Exercises 11.27
- count: ....
- find: multi*q

## Exercises 11.28
## Exercises 11.29
- upper_bound: an iterator that -> first val bigger than the key;
- lower_bound: an iterator that -> first val bigger than the key;
- equal_bound: pair contains upper_bound and lower_bound

## Exercises 11.30
- `pos`: a pair contains two iterator
- `pos.first`: first iterator
- `pos.first->second` the value of the map.

## Exerciese 11.31s
## Exerciese 11.32
## Exerciese 11.33
## Exerciese 11.34
- add something shit to the map

## Exerciese 11.35
- the map rebember the fitst word

## Exercises 11.36
- Ignore that line
  
## Exercises 11.36
- ordered: 
  - insert: logN
  - delete: logN
  - ...
  - but , ... it's sorted;  
- unordered: 
  - insert: 1
  - delete: 1
  - contains: 1
  - change: 1