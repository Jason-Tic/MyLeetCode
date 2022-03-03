#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        size_t maxLength = 0;
        if (heights.empty())
            return maxLength;
        for (size_t i = 0; i < heights.size(); i++)
        {
            size_t left = i;
            while (left > 0 && heights[left - 1] >= heights[i])
                left--;
            size_t right = i;
            while (right < heights.size() -1 && heights[right + 1] >= heights[i])
                right++;
            maxLength = max(maxLength, (right - left + 1) * heights[i]);
        }

        return maxLength;
    }
};

int main()
{
    Solution s1;
    vector<int> vec = {2, 4};
    cout << s1.largestRectangleArea(vec) << endl;
    return 0;
}