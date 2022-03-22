#ifndef __TREENODE_H__
#define __TREENODE_H__
#include<iostream>
#include<string>
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

        TreeNode() = default;
        TreeNode():val(0),lchild(nullptr),rchild(nullptr){}
        TreeNode(T x):val(x),lchild(nullptr),rchild(nullptr){}       
};

// struct TreeNode
// {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode();
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
#endif