#include <iostream>
#include <string>
#include <map>
using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        const int radic[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const string symbo[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string roman = "";
        for (size_t i = 0; num > 0; i++)
        {
            int count = num / radic[i];
            num %= radic[i];
            for (; count > 0; --count)
                roman += symbo[i];
        }
        return roman;
    }

    inline int map(const char c)
    {
        switch (c)
        {

        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

    int romanToInt(const string &s)
    {
        int result = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            // cout << map(s[i]) << "  ";
            if (i > 0 && map(s[i]) > map(s[i - 1]))
                result += (map(s[i]) - 2 * map(s[i - 1]));
            else
                result += map(s[i]);
            // cout << result << " ";
        }
        return result;
    }
};

int main()
{
    Solution s1;
    cout << s1.intToRoman(3999) << endl;
    string str = "";
    cin >> str;
    cout << s1.romanToInt(str) << endl;
    return 0;
}