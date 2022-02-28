#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int LengthOfLastWord(const string &s)
    {

        auto first = find_if(s.rbegin(), s.rend(), ::isalpha);
        cout << *first << endl;
        auto last = find_if_not(first, s.rend(), ::isalpha);

        return distance(first, last);
    }
};

int main()
{
    Solution s1;

    cout << s1.LengthOfLastWord("Hello Worlc and") << endl;
    cout << isalpha(' ') << endl;
    return 0;
}