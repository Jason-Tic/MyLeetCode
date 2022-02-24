#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<string> anagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> group;
        for (const auto s : strs)
        {
            cout << s << "  ";
            string key = s;
            sort(key.begin(), key.end());
            cout << key << endl;
            group[key].push_back(s);
        }
        vector<string> result;
        for (auto it = group.cbegin(); it != group.cend(); it++)
        {
            if (it->second.size() > 1)
                result.insert(result.end(), it->second.begin(), it->second.end());
        }
        return result;
    }
};
int main()
{
    vector<string> strs = {"dirty room", "dormitory", "tea"};
    // vector<string> result;
    Solution s1;
    cout << (s1.anagrams(strs)).size() << endl;
    // cout << result.size() << endl;
    return 0;
}