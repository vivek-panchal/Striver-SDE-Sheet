#include<bits/stdc++.h>
int solve(vector<int>& nums, int n,int k){
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        // put first k element into min heap
        for(int i=0;i<k;i++){
            minHeap.push(nums[i]);
        }
        
        // compare remaining element 
        
        for(int i=k;i<n;i++){
            if(nums[i]>minHeap.top()){
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }
        return minHeap.top();
    }
int solve2(vector<int>& nums, int n,int k){
        priority_queue<int> maxHeap;
        
        // put first k element into min heap
        for(int i=0;i<k;i++){
            maxHeap.push(nums[i]);
        }
        
        // compare remaining element 
        
        for(int i=k;i<n;i++){
            if(nums[i]<maxHeap.top()){
                maxHeap.pop();
                maxHeap.push(nums[i]);
            }
        }
        return maxHeap.top();
    }
vector<int> kthSmallLarge(vector<int> &nums, int n, int k)
{
    vector<int> ans;
    ans.push_back(solve2(nums,n,k));
    ans.push_back(solve(nums,n,k));
    return ans;
}
