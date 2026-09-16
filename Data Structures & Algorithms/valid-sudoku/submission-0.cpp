class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, vector<vector<int>>> loc_map;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (loc_map.count(board[i][j]) == 0) {
                    loc_map.insert({board[i][j], {{i, j}}});
                } else {
                    vector<vector<int>>& locs = loc_map.find(board[i][j])->second;
                    for (auto& loc : locs) {
                        if (loc[0] == i || loc[1] == j) return false;
                        if (loc[0]/3 == i/3 && loc[1]/3 == j/3) return false;
                    }
                    locs.push_back({i, j});
                }
            }
        }
        return true;
    }
};
