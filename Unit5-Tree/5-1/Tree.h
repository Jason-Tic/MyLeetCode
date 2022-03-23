#ifndef __TREE_H__
#define __TREE_H__
#include <vector>
#include "TreeNode.h"

template <typename T>
class TreeNode;

template <typename T>

class Tree
{
private:
    TreeNode<T> *root;
public:
    Tree() = default;
    Tree(TreeNode<T> *r) : root(r) {}
    ~Tree();
    void CreateTree(string nodes[]);
    TreeNode<T>* createBinTree(vector<T> nodes);
};

#endif