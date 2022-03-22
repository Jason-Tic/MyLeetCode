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

    NodeType* createBinTree(string[] nodes);

public:
    Tree() = default;
    Tree(NodeType *r) : root(r) {}
    ~Tree();
    void CreateTree(string nodes[]);
    
};

#endif