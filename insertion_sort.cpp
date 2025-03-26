#include<bits/stdc++.h>

using namespace std;


void insertion_sort(vector<int> &arr,int low,int high){
    int n=arr.size();
    for(int i=1;i<n;i++){
        j=i-1;
        while(j>0){
            if(arr[j]>arr[i]){
                swap(arr[j],arr[j+1]);
                j--;
            }
        }
    }
}