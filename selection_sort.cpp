#include<bits/stdc++.h>

using namespace std;
//step1:select minimum and swap with arr[i]
//step2: i++ and select minimum from arr[i:] and swap with arr[i]
//so in every step we are placing the ith smallest element in its place
void selection_sort(vector<int> &arr,int low,int high){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                    min=j;
            }
        }
        swap(arr[i],arr[min]);
    }    
}