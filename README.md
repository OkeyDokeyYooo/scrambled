# scrambled

## Requirements

1. Create a new file called `scrambled.c`. The file contains a single function that matches this declaration:
  `int scrambled( unsigned int a[], unsigned int b[], unsigned int len );`
2. Arrays `a` and `b` are both of length `len`, and only contain values in the range [0 .. 99] inclusive.
3. The function `scrambled()` should return 1 if and only if arrays `a` and `b` contain the same values in any order, or 0 otherwise.
4. `len` can have any unsigned int value, including 0.
5. If `len` is 0 then scrambled() should return 1 (since the arrays have the same - empty -
contents).
6. You must not change the contents of the arrays.
7. Use an algorithm that has run time linear in the array length n. Note that this means you
can not sort the arrays since that can not be done in linear time.

## Hint
The number of different values what you see are is known and quite small.

## Example

input and the result will return 0 you know:

* a = {10,15,20}, b = {10,15,20} a = {99}, b = {99}
* a = {1,2,3,4,5}, b = {5,3,4,2,1} a = {}, b = {} (i.e. len = 0)
* a = {2,1,3,4,5}, b = {1,2,4,3,5}

input and the result will return 1 some how:

* a = {1,1}, b = {1,2}
* a = {10,15,20}, b = {10,15,21} 
* a = {1,2,3,4,5}, b = {5,3,4,2,2}
