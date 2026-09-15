class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_size = nums.size();
        vector<int> pref(nums_size), suff(nums_size), res(nums_size);
        pref[0] = 1;
        suff[nums.size() - 1] = 1;

        int foo = 1;
        for (int i = 1; i < nums_size; i++) {
            foo *= nums[i-1];
            pref[i] = foo;
        }

        foo = 1;
        for (int i = nums_size - 2; i >= 0; i--) {
            foo *= nums[i+1];
            suff[i] = foo;
        }

        for (int i = 0; i < nums_size; i++) {
            res[i] = pref[i] * suff[i];
        }
        return res;
    }
};
