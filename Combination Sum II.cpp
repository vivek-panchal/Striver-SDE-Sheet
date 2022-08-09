#include<bits/stdc++.h>
void solve(vector<int> &arr, int n, int target,vector<vector<int>> &ans,vector<int> &output,int sum,int index){
    if(sum==target){
       ans.push_back(output);
       return;
    }
    if(sum>target){
       return;
    }
    if(index>=arr.size())
        return;
    //include
    output.push_back(arr[index]);
    sum = sum + arr[index];
    solve(arr,n,target,ans,output,sum,index+1);
    output.pop_back();
    sum-=arr[index];
    //exclude
    while(index+1<arr.size() && arr[index]==arr[index+1])
        index++;
    solve(arr,n,target,ans,output,sum,index+1);
    
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
   // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> output;
    int sum=0;
    solve(arr,n,target,ans,output,sum,0);
    return ans;
    
}
