#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
class Solution{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if(strs.empty()) return "";
        for(int idx=0;idx<strs.size();idx++){
            for(int i=1;i<strs.size();i++){
                if(strs[i][idx]!=strs[0][idx]) return strs[0].substr(0,idx);
            }
        }
    } 
};
int main()
{
    
    return 0;
}