#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(const string &s)
    {
        string left = "([{";
        string right = ")]}";
        stack<char> stk;
        for (auto c : s)
        {
            if (left.find(c)!=string::npos)
                stk.push(c);
            else{
                if(stk.empty()||stk.top()!=left[right.find(c)])
                    return false;
                else 
                    stk.pop();
            }
        }

        return stk.empty();
    }
};

int main()
{
    Solution s1;
    cout<<s1.isValid("{]")<<endl;
    return 0;
}
