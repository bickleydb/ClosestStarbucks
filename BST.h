//DO NOT CHANGE THIS FILE
//Author: Bo Brinkman
//Date: 2013/10/01

#include "SSet.h"

template <class T>
class Node {
public:
  T info;
  Node* left;
  Node* right;
};

template <class T>
class BST : public SSet <T> {
 public:
  BST();
  ~BST();
  
  //Return the number of items currently in the SSet
  virtual unsigned long size();

  //Add a new item, x, with Key k.
  // If an item with Key k already exists, overwrite it
  virtual void add(Entry e);

  //Remove the item with Key k. If there is no such item, do nothing.
  virtual void remove(Entry e);

  //Return the item with Key k. 
  // If there is no such item, throw an exception.
  virtual Entry find(double xCoor, double yCoor);
  //Return true if there is an item with Key k in the table. If not,
  // return false
  virtual bool entryExists(Entry e);

  //If there is a key in the set that is > k,
  // return the first such key. If not, return k
  virtual Entry next(Entry e);
  //If there is a key in the set that is < k,
  // return Entry first such key. If not, return k
  virtual Entry prev(Entry e);
  virtual Node<T>* find(double findX, double findY, Node<T>* r, int rowNum);

  Node<T>* root;
private:
  

  virtual unsigned long size(Node<T>* r);
  //These are the recursive versions of each of your methods.
  // You should return the address of the new root node, whether
  // or not the root node changes.
  virtual Node<T>* add(T x, Node<T>* r, int rowNum);
  virtual Node<T>* remove(Entry e, Node<T>* r);

  //This one returns the address of the found node, NULL
  // if not found
  
  

  //Find the item in the sub-tree rooted at r which has the smallest key
  virtual Node<T>* min(Node<T>* r);

  //Find the item in the sub-tree rooted at r which has the largest key
  virtual Node<T>* max(Node<T>* r);

  //Find the next/prev node, and return its address
  virtual Node<T>* next(Entry e, Node<T>* r);
  virtual Node<T>* prev(Entry e, Node<T>* r);

};

#include "BST.ipp"
