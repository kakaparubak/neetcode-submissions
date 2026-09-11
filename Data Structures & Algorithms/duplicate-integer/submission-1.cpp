class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            if (!count.contains(num)) {
                count[num] = 1;
            } else {
                return true;
            }
        }
        return false;
    }
};