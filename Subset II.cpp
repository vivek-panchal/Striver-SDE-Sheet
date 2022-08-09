#include<bits/stdc++.h>
void solve (vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int i){
    if(i==arr.size()){
        ans.push_back(temp);
        return;
    }
    //include
    temp.push_back(arr[i]);
    solve(arr,ans,temp,i+1);
    // backtraking 
    temp.pop_back();
    // exclude
    while(i<arr.size() && arr[i]==arr[i+1])
        i++;
    solve(arr,ans,temp,i+1);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<int> temp;
    vector<vector<int>> ans;
    solve(arr,ans,temp,0);
    sort(ans.begin(),ans.end());
    return ans;
}
