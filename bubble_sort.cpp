#include<bits/stdc++.h>

using namespace std;

void buuble_sort(vector<int> &arr,int low ,int high){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int did_swap=0;
        for(int j=0;j<n-i-1;j++){
            if (arr[j+1]<arr[j]){
                    swap(arr[j+1],arr[j]);
                    did_swap=1;
            }
        }
        if(did_swap==0){
            return ; 
        }
    }
}