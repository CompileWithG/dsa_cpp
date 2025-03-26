#include<bits/stdc++.h>

using namespace std;
//brute:for every element loop over the entire array to check if the sum matches the target
//better:leep over the array and store every element in an hashmap ,if target -current element exists in the hashmap we got
//one pair of indexes satisfying the target
//optimal solution is below:


pair<int,int> two_sum(vector<int> &arr,int target){
    sort(arr.begin(),arr.end());
    int left=0;
    int n=arr.size();
    int right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==target){
            return {left,right};
        }
        if(arr[left]+arr[right]>target){
            right--;
        }
        else{
            left++;
        }
    }
    return {-1,-1};
}