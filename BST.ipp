#define NULL 0
#include <string>
#include <cmath>

template <class T>
BST<T>::BST(){
  root=NULL;

 
}

template <class T>
BST<T>::~BST(){
  while(root != NULL)
    remove(root->info,root);
}

template <class T>
void keysInOrder(Node<T>* r) {
 if (r == NULL)
    return;
else {
  keysInOrder(r->left);
  std::cout<<r->info.city<<std::endl;
  keysInOrder(r->right);
	}
  



}
  
//Return the number of items currently in the SSet
template <class T>
unsigned long BST<T>::size(){
  return size(root);
}

template <class T>
unsigned long BST<T>::size(Node<T>* r) {
  int count = 0;
  if (r == NULL)
    return 0;
  else {
    count = 1;
	}
  return count + size(r->left)+size(r->right);
}

//Add a new item, x, with Entry e.
// If an item with Entry e already exists, overwrite it
template <class T>
void BST<T>::add(Entry e){
  root=add(e,root,0);
}

//Remove the item with Entry e. If there is no such item, do nothing.
template <class T>
void BST<T>::remove(Entry e){
//  remove(k,root);
    
}

//Return the item with Entry e. 
// If there is no such item, throw an exception.
template <class T>
T BST<T>::find(Entry e){
//return //find(k,root)-> data;
  return e;
  }

//Return true if there is an item with Entry e in the table. If not,
// return false
template <class T>
bool BST<T>::entryExists(Entry e){
 /* Node<T>* cur = root;
  while(cur != NULL) {
    if (cur->k == k)
	  return true;
	else if(k > cur-> k)
	  cur = cur->right;
	else if(k < cur->k)
	  cur = cur->left;
  }
  */
  return false;
}

//If there is a key in the set that is > k,
// return the first such key. If not, return k
template <class T>
Entry BST<T>::next(Entry e){
/*  Node<T>* rtn = next(k,root);
  if (rtn == NULL) 
   return k;
  return rtn->k;
  */
 
 return e;
}

template <class T>
Node<T>* BST<T>::next(Entry e, Node<T>* r){
  /*Node<T>* cur = root;
  Node<T>* best = root;
  if (k > max(root)->k) {
    return NULL;
  }
  while (cur != NULL) {
    if (k < cur->k)
	  cur = cur -> left;
	else if (k > cur-> k)
	  cur = cur-> right;
	else if (k == cur->k) 
	  return best;
	 if (cur!= NULL && cur-> k < best-> k && cur->k > k)
	    best = cur;
  }
  return best;
  */

  return new Node<T>();
}

//If there is a key in the set that is < k
// return the first such key. If not, return k
template <class T>
Entry BST<T>::prev(Entry e){
/*Node<T>* rtn = prev(k,root);
  if (rtn == NULL) {
   return k;
   }
  return rtn->k;

  */
  return e;
}

template <class T>
Node<T>* BST<T>::prev(Entry e, Node<T>* r){
  /* Node<T>* cur = root;
  Node<T>* best = root;
  if (k < min(root)->k)
    return NULL;

  while (cur != NULL) {
    if (k < cur->k) {
	best = cur;
	  cur = cur->left;
	}
	else if (k > cur ->k) {
	  cur = cur-> right;
	
	}

	else if (k == cur->k)
	  return cur->left;
  }
  return best;
  */
    
  
  return NULL;
 
}


template <class T>
Node<T>* BST<T>::add(T ent, Node<T>* r, int rowNum){
  if (rowNum % 2 == 0) {
	 if(r == NULL) {
	  r = new Node<T>();
      r->info = ent;
	  r->left = NULL;
	  r->right = NULL;
	  return r;
    }
      else if (r->info.x==ent.x) {
	  r->info = ent;
	  return r;
    }
      else if(ent.x < r->info.x) {
      r->left = add(ent,r->left,rowNum++);
	  return r;
    }
     else if(ent.x > r->info.x) {
     r->right = add(ent,r->right,rowNum++);
	  return r;
    }
  return r;

  } else {

    if(r == NULL) {
	  r = new Node<T>();
      r->info = ent;
	  r->left = NULL;
	  r->right = NULL;
	  return r;
    }
      else if (r->info.y==ent.y) {
	  r->info = ent;
	  return r;
    }
      else if(ent.y < r->info.y) {
      r->left = add(ent,r->left,rowNum++);
	  return r;
    }
     else if(ent.y > r->info.y) {
     r->right = add(ent,r->right,rowNum++);
	  return r;
    }
  return r;
  }

}

template <class T>
Node<T>* BST<T>::remove(Entry ent, Node<T>* r){
/* if (r == NULL) {
  return NULL;
  } else if (r->k == k) {
    if (r->left == NULL && r-> right == NULL) {
	  delete r;
	  return NULL;
	} else if (r->left == NULL || r->right == NULL) {
	  Node<T>* newNode = r->left;
	  if (newNode == NULL) {
;	     newNode = r->right;
		 }
	  delete r;
	  return newNode;
	} else {
	    Node<T>* newNode = max(r->left);
	    Key tempK = newNode->k;
	    T tempData = newNode->data;
	    newNode->k = r->k;
	    newNode->data = r->data;
	    r->k = tempK;
	    r-> data = tempData;
	    r->left = remove(k,r->left);
	    return r;
	    }
	  }
	  else if (k < r->k) {
	  r ->left = remove(k,r->left);
	  return r;
	  } else {
	    r->right =remove(k,r->right);
		return r;
	  }
	  */

	  return NULL;
}

template <class T>
Node<T>* BST<T>::find(Entry e, Node<T>* r){
/*  Node<T>* cur = r;
  if (cur == NULL) {
    return NULL;
  }
  if (cur->k == k) {
    return cur;
  } else if (cur-> k > k) {
    cur = find(k,cur->left);
  } else {
    cur = find(k,cur-> right);
  }

  return cur;
  */
  return NULL;
}

template <class T>
Node<T>* BST<T>::max(Node<T>* r){
  Node<T>* cur = r;
  while(cur -> right != NULL) {
    cur = cur->right;

  }
  return cur;
}

template <class T>
Node<T>* BST<T>::min(Node<T>* r){
  Node<T>* cur = r;
  while(cur -> left != NULL) {
    cur = cur->left;

  }
  return cur;
}
