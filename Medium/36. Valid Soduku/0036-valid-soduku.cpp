class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<string> memory;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]!='.')
                {
                    string row=string(1,board[i][j])+"row"+to_string(i);
                    string col=string(1,board[i][j])+"col"+to_string(j);
                    string box=string(1,board[i][j])+"box"+to_string((i/3)*3+j/3);

                    if(memory.count(row)||memory.count(col)||memory.count(box))
                    {
                        return false;
                    }

                    memory.insert(row);
                    memory.insert(col);
                    memory.insert(box);
                }
            }
        }
        return true;
    }
};
