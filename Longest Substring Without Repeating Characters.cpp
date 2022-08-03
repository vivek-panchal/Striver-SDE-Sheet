#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    vector<int> mpp(256,-1);
        int left=0;
        int right =0;
        int n= s.size();
        int length=0;
        while(right<n){
            if(mpp[s[right]]!=-1)
                left=max(mpp[s[right]]+1 , left);
            mpp[s[right]]=right;
            length=max(length,right - left +1);
            right++;
        }
        return length;
}
