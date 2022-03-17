/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream>
#include <vector>
#include <stack>
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<const TreeNode *> S;
        const TreeNode *P = root;
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

    void recoverTree(TreeNode *root)
    {
        vector<TreeNode *> result;
        stack<TreeNode *> S;
        TreeNode *P = root;
        TreeNode *left = nullptr;
        TreeNode *right = nullptr;
        while (P != nullptr || !S.empty())
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
                result.push_back(P);
                P = P->right;
            }
        }

        for (size_t i = 0; i < result.size()-1; i++)
        {
            if (result[i]->val > result[i + 1]->val)
            {
                left = result[i];
                break;
            }
        }

        for (size_t i = result.size() - 1; i > 0; i--)
        {
            if (result[i]->val < result[i - 1]->val)
            {
                right = result[i];
                break;
            }
        }

        int num = left->val;
        left->val = right->val;
        right->val = num;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    Solution S1;
    S1.recoverTree(root);
    // cout<<root->val<<endl;
}
