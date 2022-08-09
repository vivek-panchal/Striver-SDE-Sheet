#include<bits/stdc++.h>
void solve(string &s,vector<string>&ans,int index){
    if(index>=s.size()){
        ans.push_back(s);
        return;
    }
    for(int i=index;i<s.size();i++){
        swap(s[i],s[index]);
        solve(s,ans,index+1);
        swap(s[i],s[index]);
    }
}
vector<string> findPermutations(string &s) {
    vector<string> ans;
    solve(s,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}
