#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class Solution
{

public:
    int myAtoi(const string &str)
    {
        int num = 0;
        int sign = 1;
        const size_t n = str.length();
        int i = 0;
        while (str[i] == ' ' && i < n)
            i++;

        if (str[i] == '+')
            i++;
        else if (str[i] == '-')
        {
            sign = -1;
            i++;
        }
        for (; i < n; i++)
        {
            if (str[i] < '0' || str[i] > '9')
                break;
            if (num > INT32_MAX / 10 || (num == INT32_MAX / 10 && str[i] - '0' > INT32_MAX % 10))
                return sign == -1 ? INT32_MIN : INT32_MAX;
            num = num * 10 + str[i] - '0';
        }

        return num * sign;
    }
};
int main()
{
    Solution s1;
    // int num = atoi("-3924x8fc");
    // cout << num << endl;
    cout << s1.myAtoi("-3924x8fc") << endl;
    return 0;
}