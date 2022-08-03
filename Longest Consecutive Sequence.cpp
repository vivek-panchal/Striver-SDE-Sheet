#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
    if(n==0)
           return 0;
        
        // sort the vector so that the consecutive elements become adjacent to each other
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        int c=1,ans=0;
        for(int i=1;i<n;i++)
        {
             /*nums[i] == nums[i-1]+ 1: This means the current element is consecutive to previous, 
              so increment current streak count. */
            if(nums[i]==prev+1)
            {
                prev=nums[i];
                c++;
            }
            
          /*nums[i] == nums[i-1]: We have found the same element as previous. Skip it, and see if we can
        still extend the sequence with next elements.*/
        
        /* when nums[i]!=nums[i-1] means we have got one of our answers,  now we can search next 
        longest  sequence */
        
            else if(nums[i] != prev)
            {
                ans=max(c,ans);
                c=1;
                prev=nums[i];
            }
        }
        ans=max(c,ans);
        return ans;

}
