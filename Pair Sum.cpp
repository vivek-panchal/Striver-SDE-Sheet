vector<vector<int> > pairSum(vector<int> &arr, int s){
   vector< vector<int> > ans;
       sort(arr.begin(),arr.end());
       int i=0;
       int j= arr.size()-1;
       while(i<=j){
           vector<int> temp;
           if(arr[i]+arr[j]==s){
               temp.push_back(arr[i]);
               temp.push_back(arr[j]);
               ans.push_back(temp);
               j--;
               i++;
           }
           if(arr[i]+arr[j]<s)
               i++;
           else
               j--;
       }
       
       return ans;

//    for(int i=0;i<arr.size(); i++ )
//    {
//    		for(int j = i+1; j<arr.size(); j++) {
//         	if(arr[i] +arr[j] == s)
//             {
//             	vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
// 				ans.push_back(temp);
//             }
//         }
//    }
//    sort(ans.begin(), ans.end());
   
}
