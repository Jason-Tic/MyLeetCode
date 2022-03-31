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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;
        if (!p || !q)
            return false;
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    bool isSameTree2(TreeNode *p, TreeNode *q)
    {
        stack<TreeNode *> sp;
        stack<TreeNode *> sq;
        sp.push(p);
        sq.push(q);

        while (!sp.empty() && !sq.empty())
        {
            p = sp.top();
            sp.pop();
            q = sq.top();
            sq.pop();

            if (p == nullptr && q == nullptr)
                continue;
            if (p == nullptr || q == nullptr)
                return false;
            if (p->val != q->val)
                return false;

            sp.push(p->left);
            sq.push(q->left);

            sp.push(p->right);
            sq.push(q->right);
        }

        return true;
    }
};
int main()
{
    TreeNode *p = new TreeNode(1);
    TreeNode *q = new TreeNode();
    return 0;
}