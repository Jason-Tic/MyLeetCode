#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
// #include "TreeNode.h"

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
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return false;
        return isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
            return true;
        if (p == nullptr || q == nullptr)
            return false;
        return p->val == q->val && isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
    }

    bool isSymmetric2(TreeNode *root)
    {
        if (root == nullptr)
            return false;
        return true;
    }
};

int main()
{
    Solution s1;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << s1.isSymmetric(root) << endl;
}