#include<iostream>
#include<string>

using namespace std;

class Solution
{
public:
    
    inline string getNext(const string &s)
    {
        string result = "";
        int num = 0;
        while(num < s.size())
        {
            int count = 1;
            while((num+1)<s.size()&&s[num+1]==s[num])
            {
                count++;
                num++;
            }
            result += to_string(count)+s[num];
            num++;
        }
        return result;
    }

    string countAndSay(int n)
    {
        if(n==1)
            return "1";
        string result = "1";
        while(--n)
        {
            result = getNext(result);
        }
        return result;
    }
};

int main()
{
    Solution s1;
    int num = 0;
    cin>>num;
    cout<<s1.countAndSay(num)<<endl;
    return 0;
}