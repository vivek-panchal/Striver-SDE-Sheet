#include<bits/stdc++.h>
bool isPossible(vector<int> &positions,int k,int mid){
    int playerCount=1;
    int prePlayer=positions[0];
    for(int i=0;i<positions.size();i++){
        if(positions[i]-prePlayer>=mid){
            playerCount++;
            if(playerCount==k){
                return true;
            }
            prePlayer=positions[i];
        }
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	sort(positions.begin(),positions.end());
    int start=0;
    int end= positions[n-1]-positions[0];
    int ans=-1;
    while(start<=end){
        int mid = start+ (end-start)/2;
    if(isPossible(positions , c,mid)){
        ans=mid;
        start=mid+1;
    }
    else
        end=mid-1;
    }
    
    return ans;
    
}
