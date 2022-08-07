#include<queue>
#include <bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    priority_queue<int, vector<int>, greater<int>> ans;
    for(int i=0;i<m;i++){
        ans.push(row1[i]);
        if(ans.size()>(m+n-k+1))
            ans.pop();
    }
    for(int i=0;i<n;i++){
        ans.push(row2[i]);
        if(ans.size()>(m+n-k+1))
            ans.pop();
    }

    return ans.top();
}
