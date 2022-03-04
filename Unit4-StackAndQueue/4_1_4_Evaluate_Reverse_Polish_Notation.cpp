#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        cout<<this->is_poerator("+")<<endl;
    }
private:
    bool is_poerator(const string &op)
    {
        return op.size() == 1 && string("+-*/").find(op) != string::npos;
    }
};