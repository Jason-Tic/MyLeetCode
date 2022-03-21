#include <iostream>
#include <cstdio>
#include <string>
#include "TreeNode.h"

using namespace std;
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
};
int main()
{
    TreeNode* p = new TreeNode(1);
    TreeNode* q = new TreeNode()
    return 0;
}