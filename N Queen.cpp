bool isPossible(vector<vector<int>>& board,int row,int col,int n){
    for(int i=row-1;i>=0;i--){
        if(board[i][col]==1) return false;
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1) return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(board[i][j]==1) return false;
    }
    return true;
}
void helper(vector<vector<int>>& board,vector<vector<int>>& ans,int row,int n){
    if(row==n){
        vector<int> vec;
        for(auto i: board)
            vec.insert(vec.end(),i.begin(),i.end());
        ans.push_back(vec);
        return ;
    }
    for(int i=0;i<n;i++){
        if(isPossible(board,row,i,n)){
            board[row][i]=1;
            helper(board,ans,row+1,n);
            board[row][i]=0;
        }
    } 
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> board(n,vector<int> (n,0));
    vector<vector<int>> ans;
    helper(board,ans,0,n);
    return ans;
}
