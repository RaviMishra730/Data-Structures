#include <iostream>
#include<bits/stdc++.h>
#include "BinaryTreeClass.h"

using namespace std;

void print(BinaryTreeNode<int>* root)
{
  if(root == NULL)
  {
    return;
  }
  cout<<root->data<<":";
  if(root->left != NULL)
  {
    cout<<"Left->"<<root->left->data;
  }
  if(root->right != NULL)
  {
    cout<<"Right->"<<root->right->data;
  }
  cout<<endl;
  print(root->left);
  print(root->right);
}

BinaryTreeNode<int>* takeInput()
{
  int rootData;

  cout<<"Enter the rootData"<<endl;
  cin>>rootData;

  if(rootData == -1)
  {
    return NULL;
  }

  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
  BinaryTreeNode<int>* leftChild = takeInput();
  BinaryTreeNode<int>* rightChild = takeInput();

  root->left = leftChild;
  root->right = rightChild;

  return root;
}

int main()
{
  /*BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
  BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
  BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
  root->left = node1;
  root->right = node2;*/

  BinaryTreeNode<int>* root = takeInput();

  print(root);
  delete root;
}
