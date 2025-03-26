#include<bits/stdc++.h>

using namespace std;

//this is the most optimal solution for arrays that also contains negative elements
//using prefix sum method using hash_map
//we return maxlen of the subarray with sumk

int longest_subarray(vector<int> &arr,int k){
    int n=arr.size();
    map<long long,int> presummap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==k){
            maxLen=max(maxLen,i++);
        }
        int rem=sum-k;
        if(presummap.find(rem)!=presummap.end()){
            int lens=presummap[rem];
            maxLen=max(maxLen,i-lens);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    return maxLen;
}