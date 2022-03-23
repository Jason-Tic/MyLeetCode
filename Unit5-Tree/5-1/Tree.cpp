#include "Tree.h"
#include <queue>
#include<string>
template <typename T>
void Tree<T>::CreateTree(string nodes[])        //按照层序遍历创建树
{
    // if (nodes.empty()||nodes[0]=="null")
    // {
    //     this->root = nullptr;
    //     return;
    // }
    // for (int i = 0; i < nodes.size(); i++)
    // {
    //     TreeNode<T>* node = new TreeNode(static_cast<T>vector[0]); 
    //     this->root = node;
    //     if(nodes[i]!="null")
    //     {
            
    //     }
    // }

    // if(nodes->empty()) return;
    // if(this->root == nullptr)
    // {

    // }

}

template <typename T>
TreeNode<T>* Tree<T>::createBinTree(vector<T> nodes)
{
    if(nodes.length()==0||nodes.empty()||nodes[0]=="null")
        return nullptr;
    
    size_t index = 0;
    size_t length = nodes.length();

    TreeNode root = new TreeNode(stoi(nodes[0]));
    queue<TreeNode> nodeQueue ;
    nodeQueue.push(root);
}

