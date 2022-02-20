#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class Solution
{
public:
    bool isMatch(const char *s, const char *p)
    {
        if (*p == '*')
        {
            while (*p == '*')
                ++p;
            if (*p == '\0')
                return true;
            while (*s != '\0' && isMatch(s, p))
                ++s;
            return *s != '\0';
        }
        else if (*p == '\0' || *s == '\0')
            return *p == *s;
        else if (*p == *s || *p == '?')
            return isMatch(++s, ++p);
        else
            return false;
    }

    bool isMatch2(const char *s, const char *p)
    {
        bool star = false; //是否是*的标记
        const char *str = s;
        const char *ptr = p;
        for (; *str != '\0'; str++, ptr++)
        {
            switch (*ptr)
            {
            case '?': /* constant-expression */
                /* code */
                break;
            case '*':
                star = true;
                s = str, p = ptr;
                while (*p == '*')
                    p++; // skip continuous '*'
                if (*p == '\0')
                    return true;
                str = s - 1;
                ptr = p - 1;
                break;
            default:
                if (*str != *ptr)
                {
                    if (!star)
                        return false;
                    str = s - 1;
                    ptr = s - 1;
                }
            }
        }
        while (*p == '*')
            ptr++;
        return (*ptr == '\0');
    }
};
int main()
{
    Solution s1;
    cout << s1.isMatch2("aab", "a*b") << endl;
    return 0;
}