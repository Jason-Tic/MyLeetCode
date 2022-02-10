#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    auto left = s.begin(), right = prev(s.end());
    while (left < right)
    {
        if (!::isalnum(*left))
            ++left;
        else if (!::isalnum(*right))
            --right;
        else if (*right != *left)
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}
int main()
{
    string str;
    getline(cin, str);
    cout<<isPalindrome(str)<<endl;
    return 0;
}