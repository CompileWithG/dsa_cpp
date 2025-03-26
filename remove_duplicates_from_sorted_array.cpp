#include<bits/stdc++.h>

using namespace std;


void remove_duplicates (vector<int> &arr,int low,int high){
    int n=arr.size();
    int i=0;
    int j=i+1;
    while(i<j&&j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else if(arr[i]!=arr[j]){
            swap(arr[++i],arr[j++]);
        }
    }
}