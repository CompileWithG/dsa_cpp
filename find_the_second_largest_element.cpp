#include<bits/stdc++.h>

using namespace std;


int largest=INT_MIN;
int slargest=INT_MIN;

int second_largest(vector<int> &arr,int low,int high){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>=largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest&&arr[i]<largest){
            slargest=arr[i];
        }
    }
    return slargest;
}