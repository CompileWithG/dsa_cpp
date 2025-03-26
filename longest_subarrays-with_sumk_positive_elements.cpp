#include<bits/stdc++.h>

using namespace std;


//the most optimal solution for arrays with only positive elements

int longest_subarray(vector<int> &arr,int k){
    int n=arr.size();
    int i=0;
    int j=0;
    int sum=0;
    int maxLen=0;
    while(j<n){
        if(i<=j&& sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxLen=max(maxLen,j-i);
        }
        j++;
        if(j<n){
            sum+=arr[j];
        }
    }
    return maxLen;
}