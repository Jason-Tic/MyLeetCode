#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution
{
public:
    int longestValidParentheses(const string &s)
    {
        int left = 0, right = 0;
        int maxLength = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                left++;
            else
                right++;
            if (left == right)
                maxLength = max(maxLength, right * 2);
            else if (left < right)
                left = right = 0;
        }
        left = right = 0;
        for (int i = s.size() - 1; i > 0; i--)
        {
            if (s[i] == '(')
                left++;
            else
                right++;
            if (left == right)
                maxLength = max(maxLength, left * 2);
            else if (right < left)
                left = right = 0;
        }
        return maxLength;
    }
};
int main()
{
    Solution s1;
    string s;
    cin >> s;
    cout << s1.longestValidParentheses(s) << endl;
    return 0;
}