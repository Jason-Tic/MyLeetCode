#ifndef __TREENODE_H__
#define __TREENODE_H__
#include<iostream>
#include<vector>
#include<stack>

using namespace std;
template<typename T> class Tree;
template<typename T>
class TreeNode
{
    friend class Tree<T>
    private:
        T val;
    public:
        TreeNode<T> *lchild;
        TreeNode<T> *rchild;

        TreeNode():val(0),lchild(nullptr),rchild(nullptr){}
        TreeNode(int x):val(x),lchild(nullptr),rchild(nullptr){}
};


#endif