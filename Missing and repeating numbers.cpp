#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
   // Write your code here 
    unordered_map<int,int>tally;
       for(int i=0;i<n;i++){
           tally[arr[i]]++;
       }
    pair<int,int>ans;
    for(int i=1;i<=arr.size();i++){
       if(tally[i]>1){
           ans.second=i;
       }
       if(tally[i]==0){
           ans.first=i;
       }
   }
   return ans;
}
