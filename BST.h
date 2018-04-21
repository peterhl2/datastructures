#ifndef BST_H_
#define BST_H_

#include <iostream>

using namespace std;

class BST {

public:

  BST(int val); //creates a BST with the given val
  ~BST();

  Node * getRoot();

  Node * getLeft(Node * subroot);
  Node * getRight(Node * subroot);

  int getVal(Node * root);

  void trav();

private:

  Node* _root;

  struct Node {
    Node * left;
    Node * right;
    int value;
  };



};


#endif
