class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map(26);
        for (char c : s) {
            map[c]++;
        }
        for (char d : t) {
            map[d]--;
            if (map[d] < 0) return false;
        }
        for (const auto& [k, v] : map) {
            if (v != 0) return false;
        }
        return true;
    }
};
