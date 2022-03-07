#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<string> stk;
        for (auto s : tokens)
        {
            if (!is_poerator(s))
                stk.push(s);
            else
            {
                int y = stoi(stk.top());
                stk.pop();
                int x = stoi(stk.top());
                stk.pop();
                if (s == "+")
                    x += y;
                else if (s == "-")
                    x -= y;
                else if (s == "*")
                    x *= y;
                else
                    x /= y;
                stk.push(to_string(x));
            }
        }
        return stoi(stk.top());
    }

private:
    bool is_poerator(const string &op)
    {
        return op.size() == 1 && string("+-*/").find(op) != string::npos;
    }
};

int main()
{
    vector<string> strings = {"4", "13", "5", "/", "+"};
    Solution s1;
    cout << s1.evalRPN(strings) << endl;
    return 0;
}