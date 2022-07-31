#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
        int index1=-1;
        int index2=-1;
        
        for(int i=n-2;i>=0;i--){
            if(permutation[i]<permutation[i+1]){
                index1=i; 
                break;
            }
                
        }
        if(index1<0){
            reverse(permutation.begin(),permutation.end());
        }
        else{
            for(int j=n-1;j>index1;j--){
            if(permutation[j]>permutation[index1]){
                index2=j;
                break;
            }
        }
        swap(permutation[index1],permutation[index2]);
        reverse(permutation.begin()+index1+1,permutation.end());
        }
    return permutation;
}
