#include <iostream>
#include <queue>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode();
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    bool isBalancedTree(TreeNode *root)
    {
        return balancedHeight(root) >= 0;
    }

    size_t balancedHeight(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        size_t left = balancedHeight(root->left);
        size_t right = balancedHeight(root->right);

        if (left < 0 || right < 0 || abs((left - right) > 1))
            return -1;
        return max(left, right) + 1;
    }

    TreeNode* readTree(vector<string> nodes)
    {
        if(nodes.empty() || nodes[0] == "null") return nullptr;
        size_t index = 0;
        size_t length = nodes.size();

        TreeNode* root = new TreeNode(stoi(nodes[0]));
        queue<TreeNode* > nodeQueue;
        nodeQueue.push(root);
        while(!nodeQueue.empty())
        {
            
        }
        return root;
    }
};

int main()
{
    TreeNode * root  = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(3);
    Solution s1;
    cout<<s1.isBalancedTree(root)<<endl;
}