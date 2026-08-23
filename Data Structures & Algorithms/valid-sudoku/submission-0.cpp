class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> rows;
        unordered_map<int,unordered_set<char>> columns;
        unordered_map<int,unordered_set<char>> blocks;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){

                char num = board[i][j];
                if (num == '.') continue;
                int block = (i / 3) * 3 + (j / 3);

                if(rows[i].find(num) != rows[i].end()) return false;
                if(columns[j].find(num) != columns[j].end()) return false;
                if(blocks[block].find(num) != blocks[block].end()) return false;
                rows[i].insert(num);
                columns[j].insert(num);
                blocks[block].insert(num);
            }
        }
        return true;
    }
};
