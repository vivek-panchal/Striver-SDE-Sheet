#include<bits/stdc++.h>
void solve(vector<string> &ans,string &s ,int index){
        if(index>=s.size()){
            ans.push_back(s);
            return;
        }
    
        for(int i=index;i<s.size();i++){
            swap(s[index],s[i]);
            solve(ans,s,index+1);
            swap(s[index],s[i]);//for backtrack 
        }
}
string kthPermutation(int n, int k) {
    vector<string> ans;
    string temp;
    for(int i=1;i<=n;i++){
       temp.push_back(i+'0');//convert int to char dont use "" only '' 
    }
    solve(ans,temp,0);
    sort(ans.begin(),ans.end());
    auto out=ans.begin()+(k-1);
    return *out;
    
}
