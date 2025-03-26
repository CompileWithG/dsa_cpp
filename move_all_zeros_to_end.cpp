#include<bits/stdc++.h>

using namespace std;


void move_zeros(vector<int> &arr,int low,int high){
    int n=arr.size();
    //first loop the array to find the first occurence of a 0
    //lets suppose we store the index of first occurence of zero in z
    int z;
    int i=z;
    int j=i+1;
    for(;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i++],arr[j]);
        }
    }
}