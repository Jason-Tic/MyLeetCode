#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class Solution
{
public:
    bool isMatch(const char *s, const char *p)
    {
        cout << "*s=" << *s << ";*p=" << *p << endl;
        if (*p == '\0')
            return *s == '\0';

        // next char is not '*', then must match current character
        if (*(p + 1) != '*')
        {
            // cout << *(p + 1) << endl;
            if (*p == *s || (*p == '.' && *s != '\0'))
            {
                // cout<<s+1<<"  "<<p+1<<endl;
                return isMatch(s + 1, p + 1);
            }
            else
                return false;
        }
        else // next char is '*'
        {
            while (*p == *s || (*p == '.' && *s != '\0'))
            {
                if (isMatch(s, p + 2))
                    return true;
                s++;
            }
            return isMatch(s, p + 2);
        }
    }
};
int main()
{
    Solution S1;
    cout << S1.isMatch("aab", "c*a*b") << endl;
    return 0;
}