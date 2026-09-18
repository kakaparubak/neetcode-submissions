class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> suffix(n), prefix(n);
        int foo = 0;
        for (int i = 0; i < n; i++) {
            foo = max(foo, height[i]);
            prefix[i] = foo;
        }

        foo = 0;
        for (int i = n - 1; i >= 0; i--) {
            foo = max(foo, height[i]);
            suffix[i] = foo;
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += max(min(prefix[i], suffix[i]) - height[i], 0);
            
        }
        return res;
    }
};
