class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        int ind = 0;
        for (auto& x : nums) {
            if (!num_map.count(target - x)) {
                num_map[x] = ind;
            } else {
                if (ind < num_map[target - x]) return {ind, num_map[target - x]};
                else return {num_map[target - x], ind};
            }
            ind++;
        };
    };
};
