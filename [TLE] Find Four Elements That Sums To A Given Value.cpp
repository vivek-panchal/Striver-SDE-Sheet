#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    string str1 = "Yes";
    string str2 = "No";
    vector<vector<int>> res;
        if(arr.empty())
            return str2;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int target2 = target - arr[i] - arr[j];
                int front =j+1;
                int end = n-1;
                while( front<end){
                    int twosum = arr[front] + arr[end];
                    if(twosum<target2){
                        front++;
                    }
                 else if(twosum>target2){
                        end--;
                    }
                    else {
                        vector<int>temp(4,0);
                        temp[0]=arr[i];
                        temp[1]=arr[j];
                        temp[2]=arr[front];
                        temp[3]=arr[end];
                        res.push_back(temp);
                        //remove duplicate of front 
                        while(front<end && arr[front] == temp[2]) ++front;
                        
                        //remove duplicate of end 
                        while(front<end && arr[end] == temp[3]) --end;
                        
                        
                    }
                    
                }
                   //remove duplicate of j
                        while(j+1<n && arr[j+1] == arr[j]) ++j;
            }
                 //remove duplicate of j
                        while(i+1<n && arr[i+1] == arr[i]) ++i;
        }
        if (res.empty())
            return str2;
        else return str1;
}
