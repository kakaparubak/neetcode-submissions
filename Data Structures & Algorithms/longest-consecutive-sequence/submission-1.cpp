class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> cons;
        int max_cons = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (cons.count(num) != 0) continue;
            if (cons.count(num - 1) != 0) {
                cons[num] = cons[num - 1];
            } else {
                cons[num] = num;
            }

            int head = cons[num];
            int foo = num + 1;
            while (cons.count(foo) != 0) {
                cons[foo] = head;
                foo++;
            }
            if (foo - head > max_cons) max_cons = foo - head;
        }
        return max_cons;
    }
};
