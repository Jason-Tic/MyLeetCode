#include "Tree.h"
#include <stack>
#include<string>
template <typename T>
void Tree<T>::ReadTree(vector<string> &nodes)
{
    if (nodes.empty()||nodes[0]=="null")
    {
        this->root = nullptr;
        return;
    }
    for (int i = 0; i < nodes.size(); i++)
    {
        TreeNode<T>* node = new TreeNode(static_cast<T>vector[0]); 
        this->root = node;
        if(nodes[i]!="null")
        {

        }
    }
}