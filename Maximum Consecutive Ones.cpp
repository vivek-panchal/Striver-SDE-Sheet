int longestSubSeg(vector<int> &arr , int n, int k){
    int i=0,j=0,ans=0;
    int count=0;
    while(i<n){
        if(arr[i]==0){
            count++;
            if(count==k+1){
                while(arr[j]!=0){
                    j++;
                }
                count--;
                j++;  
            }  
        }
        ans=max(ans,i-j+1);
        i++;
    }
    return ans;
}

//********************************************************* LEETCODE APPROACH **************************************************************************
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                
            }
            else{
                ans=max(ans,count);
                count=0;
            }
                
        }
        return max(ans,count);
    }
};
