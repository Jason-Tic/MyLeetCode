#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{

public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        traverse(root, 1, result, true);
        return result;
    }

    void traverse(TreeNode *root, size_t level, vector<vector<int>> &result, bool left_to_right)
    {
        if (!root)
            return;
        if (Level > result.size())
            result.push_back(vector<int>());
        if (left_to_right)
            result[Level - 1].push_back(root->val);
        else
            result[Level - 1].insert(result[Level - 1].begin(), root->val);

        traverse(root->left, Level + 1, result, !left_to_right);
        traverse(root->right, Level + 1, result, !left_to_right);
    }
};
int main()
{

    return 0;
}