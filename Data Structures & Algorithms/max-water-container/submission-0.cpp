class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int i = 0, j = heights.size() - 1;
        while (i < j) {
            res = max(min(heights[i], heights[j]) * (j - i), res);
            cout << res << endl;
            if (heights[i] > heights[j]) j--;
            else if (heights[i] < heights[j]) i++;
            else if (i > heights.size() - j) i++;
            else j--;
        }
        return res;
    }
};
