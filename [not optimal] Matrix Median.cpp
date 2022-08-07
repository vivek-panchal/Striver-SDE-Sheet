#include <bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp.push_back(matrix[i][j]);
        }
    }
    sort(temp.begin(),temp.end());
    int size = temp.size();
    int ans=0;
    int x=size/2;
    ans=temp[x];
    
    return ans;
}
