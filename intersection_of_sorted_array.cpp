#include<bits/stdc++.h>

using namespace std;


vector<int> intersection_sorted(vector<int> &arr1,vector<int> &arr2,int n1,int n2){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]<arr2[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return  ans;
}