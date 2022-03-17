#ifndef __TREE_H__
#define __TREE_H__
#include <vector>
#include "TreeNode.h"

template <typename T>
class TreeNode;

template <typename T>
class Tree
{
    typedef TreeNode<T> NodeType;

private:
    NodeType *root;

public:
    Tree(NodeType *r) : root(r) {}
    ~Tree();
    void ReadTree(vector<string> &nodes);
};

#endif