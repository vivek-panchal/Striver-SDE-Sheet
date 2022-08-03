#include <bits/stdc++.h> 
int merge(vector<int>& nums,int low,int mid,int high){
        int cnt=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i]>2LL*nums[j]){
                j++;
            }
            cnt+=(j-(mid+1));
        }
        vector<int>temp;
        int left=low ;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else
            {
                temp.push_back(nums[right++]);
            }
        }
        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=high){
            temp.push_back(nums[right++]);
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return cnt;
    }
    int mergeSort(vector<int>& nums,int low,int high){
        if(low>=high)
            return 0;
        int mid= low+(high-low)/2;
        int inv=mergeSort(nums,low,mid);
        inv+= mergeSort(nums,mid+1,high);
        inv+=merge(nums,low,mid,high);
        
        return inv;
    }
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
    return mergeSort(arr,0,n-1);
}
