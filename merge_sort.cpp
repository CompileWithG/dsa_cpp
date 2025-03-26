#include<bits/stdc++.h>

using namespace std;

void merge_sort(vector<int> &arr,int low,int high){
    int middle=(low+high)/2;
    if(low>=high)
         return;
    merge_sort(arr,low,middle);
    merge_sort(arr,middle+1,high);
    merge(arr,low,middle,high);
}

void merge(vector<int> &arr,int low,int middle,int high){
    int left=0;
    int right=middle+1;
    vector<int> temp;
    while(left<=middle&&right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=middle){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    int i=0;
    for(auto it: temp){
        arr[i]=it;
        i++;
    }
}