void solve(vector<int> &num,vector<int> &ans,int i, int temp){
    if(i>=num.size()){
        ans.push_back(temp);
        return;
    }
    solve(num,ans,i+1,temp);
    temp+=num[i];
    solve(num,ans,i+1,temp);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int temp=0;
    solve(num,ans,0,temp);
    sort(ans.begin(),ans.end());
    return ans;
}
