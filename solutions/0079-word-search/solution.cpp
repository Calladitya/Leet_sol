class Solution {
public:
bool backtrack(vector<vector<char>>& board, string word,int index,int i ,int j,int m,int n){
    if(index==word.size()){
        return true;
    }
    if(i<0 || j<0 || i>=m || j>=n){
        return false;
    }
    if(board[i][j]!=word[index]){
        return false;
    }
    //for visited condition
    char temp=board[i][j];
    board[i][j]='#';
     
    bool found=backtrack(board,word,index+1,i+1,j,m,n)||
               backtrack(board,word,index+1,i-1,j,m,n)||
               backtrack(board,word,index+1,i,j+1,m,n)||
               backtrack(board,word,index+1,i,j-1,m,n);

           board[i][j]=temp;//to became unvisited;
           return found;    
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(backtrack(board,word,0,i,j,m,n)){
                    return true;
                }
            }
        }
        return false;
    }
};
