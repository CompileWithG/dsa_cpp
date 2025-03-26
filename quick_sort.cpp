#include<bits/stdc++.h>

using namespace std;

void quick_sort(vector<int>&arr,int low,int high){
    int pivot=low;
    while(low<high){
        int partition_index=partition(arr,low,high);
        quick_sort(arr,low,partition_index-1);
        quick_sort(arr,partition_index+1,high);
    }
}

int partition(vector<int> &arr,int low,int high){
    int pivot=low;
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}