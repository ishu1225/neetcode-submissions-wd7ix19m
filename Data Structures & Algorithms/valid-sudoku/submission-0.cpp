class Solution {
public:
    bool check(vector<vector<char>>& board,int row, int col,char dig){
        for(int i=0;i<9;i++){
           if(i!=row&&board[i][col]==dig) return false;
        }
        for(int i=0;i<9;i++){
           if(i!=col&&board[row][i]==dig) return false;
        }
        int row_c=(row/3)*3;
        int col_c=(col/3)*3;
        for(int i=row_c;i<row_c+3;i++){
            for(int j=col_c;j<col_c+3;j++){
                if(i!=row&&j!=col&&board[i][j]==dig) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char dig=board[i][j];
                if(dig!='.')if(!check(board,i,j,dig))return false;
            }
        }
        return true;
    }
};
