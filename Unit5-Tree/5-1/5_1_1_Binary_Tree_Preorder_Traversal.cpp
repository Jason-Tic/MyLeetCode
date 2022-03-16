#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{

public:
    TreeNode *ReadTree()
    {
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> vec;
        stack<const TreeNode *> s;
        if (root)
            s.push(root);

        while (!s.empty())
        {
            auto node = s.top();
            s.pop();
            vec.push_back(node->val);
            if (node->right)
                s.push(node->right);
            if (node->left)
                s.push(node->left);
        }
        return vec;
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<const TreeNode *> S;
        const TreeNode * P = root;
        while (!S.empty() || P != nullptr)
        {
            if (P != nullptr)
            {
                S.push(P);
                P = P->left;
            }
            else
            {
                P = S.top();
                S.pop();
                result.push_back(P->val);
                P = P->right;
            }
        }
        return result;
    }

    vector<int> inorderTraversal_Morris(TreeNode *root)
    {
        
    }
};

int main()
{
    return 0;
}
