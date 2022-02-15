#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{

public:
    string addBinary(string a, string b)
    {
        string result = "";
        const size_t n = a.size() > b.size() ? a.size() : b.size();

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        for (size_t i = 0; i < n; i++)
        {
            const size_t ai = i < a.size() ? a[i] - '0' : 0;
            // cout << ai << "    ";
            const size_t bi = i < b.size() ? b[i] - '0' : 0;
            // cout << bi << "    ";
            const size_t val = (ai + bi + carry) % 2;
            // cout << val << "    ";
            carry = (ai + bi + carry) / 2;
            result.append(to_string(val));
        }
        if (carry)
            result.append("1");
        reverse(result.begin(), result.end());
        return result;
    }
};
int main()
{
    Solution s1;
    cout << s1.addBinary("100", "111") << endl;
    return 0;
}