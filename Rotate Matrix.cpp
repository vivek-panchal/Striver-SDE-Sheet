#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int l=0,r=m-1,t=0,b=n-1;
   while(l<r&&t<b){
      for(int i=t;i<b;i++) swap(mat[i][l],mat[i+1][l]);
      for(int i=l;i<r;i++) swap(mat[b][i],mat[b][i+1]);
      for(int i=b;i>t;i--) swap(mat[i][r],mat[i-1][r]);
      for(int i=r;i>l+1;i--) swap(mat[t][i],mat[t][i-1]); //to avoid swapping top left element twice
         l++;t++,b--;r--;
   }

}
