class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.length(); i < j; i++, j--) {
            while (!isalnum(s[i])) i++;
            while (!isalnum(s[j])) j--;
            if (tolower(s[i]) != tolower(s[j]) && i < j) return false;
        }
        return true;
    }
};
