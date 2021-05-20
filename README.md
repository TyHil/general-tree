# general-tree
[![Run on Repl.it](https://repl.it/badge/github/TyHil/linked-list)](https://repl.it/github/TyHil/linked-list)
## Description
A general tree C++ library  
Using my [linked-list](https://github.com/TyHil/linked-list) library  
## Documentation
### Clear
`template <typename T> void tree<T>::clear(linkedList<treeNode<T>> ** from)`  
Clears and deletes all nodes and data inside the given list.  
Paramaters: `linkedList<treeNode<T>> ** from`: pointer to a linked list pointer  
### Add
`template <typename T> void tree<T>::add(int dir[], int depth, T * newData)`  
Adds a new node with specified data to the end of the linked list found by the specified direction.  
Parameters: `int dir[]`: list of locations in linked lists leading to the location, `int depth`: length of `dir`, `T * newData`: pointer to new data to be stored  
### Get
`template <typename T> treeNode<T> * tree<T>::get(int dir[], int depth)`  
Returns a pointer to the node at the specified direction.  
Parameters: `int dir[]`: list of locations in linked lists leading to the location, `int depth`: length of `dir`  
Returns: `treeNode<T> *`: a pointer to the tree node at the specified direction  
### Set
`template <typename T> void tree<T>::set(int dir[], int depth, T * newData)`  
Replaces the data of node at the specified direction with new data.  
Parameters: `int dir[]`: list of locations in linked lists leading to the location, `int depth`: length of `dir`, `T * newData`: pointer to new data to be stored  
### Insert
`template <typename T> void tree<T>::insert(int dir[], int depth, T * newData)`  
Inserts a new node and new data in the linked list specified by the direction and before the last index.  
Parameters: `int dir[]`: list of locations in linked lists leading to the location, `int depth`: length of `dir`, `T * newData`: pointer to new data to be stored  
### Remove
`template <typename T> void tree<T>::remove(int dir[], int depth)`  
Removes the node and data at the specified direction.  
Parameters: `int dir[]`: list of locations in linked lists leading to the location, `int depth`: length of `dir`  
### Is Empty
`template <typename T> bool tree<T>::isEmpty()`  
Returns true if the tree has no elements in it.  
Returns: `bool`: whether the tree is empty  
### Swap
`void swap(const int index1, const int index2)`  
Switches the data pointers of the nodes at the specified directions.  
Parameters: `int dir1[]`: list of locations in linked lists leading to the first location, `int depth1`: length of `dir1`, `int dir2[]`: list of locations in linked lists leading to the second location, `int depth2`: length of `dir2`  
## License
GPL-3.0 License
