class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto& str : strs) {
            encoded += "_" + to_string(str.length()) + "_";
            encoded += str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '_') {
                size_t j = i + 1;
                bool is_not_len = false;
                while (j < s.size() && s[j] != '_' ) {
                    if (!isdigit(s[j])) {
                        is_not_len = true;
                        break;
                    }
                    j++;
                }
                if (is_not_len) continue;
                int str_len = stoi(s.substr(i + 1, j - i - 1));
                
                string test_string = s.substr(j + 1, str_len);

                strs.push_back(s.substr(j + 1, str_len));
                cout << test_string << " BREAK ";
                // strs.push_back(s.substr(i + 1, j - i - 1));
                i = j;  // skip to after closing '_'
            }
        }
        return strs;
    }
};
