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
            // check right is present into set or not
            if(mpp[s[right]]!=-1)// right present at set , so now we chect jha abhi left hai or jis index per right set me present hai unme se konsa index bda hai jo bhi bda hai left ko vha put kar do
                left=max(mpp[s[right]]+1 , left);
            // set me index update kar do repeating character ka , abhi vo right index per hai
            mpp[s[right]]=right;
            // max length store kar lo
            length=max(length,right - left +1);
            right++;
        }
        return length;
}
