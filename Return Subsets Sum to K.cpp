void solve(int i,vector<int>& arr,int k,vector<vector<int>>& ans,vector<int>& temp,int sum){
    if(i==arr.size()){
        if(sum==k){
            ans.push_back(temp);
        }
        return;
    }
    
    // include
    temp.push_back(arr[i]);
    sum+=arr[i];
    solve(i+1,arr,k,ans,temp,sum);
    //backTracking
    temp.pop_back();
    sum-=arr[i];
    //exclude
    solve(i+1,arr,k,ans,temp,sum);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k){
    vector<vector<int>> ans;
    vector<int> temp;
    int sum=0;
    solve(0,arr,k,ans,temp,sum);
    return ans;
}  
