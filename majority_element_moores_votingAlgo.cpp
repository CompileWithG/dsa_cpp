#include<bits/stdc++.h>

using namespace std;



int majority_element(vector<int> &arr){
    int n=arr.size();
    int cnt=0;
    int elm=-1;
    for(int i=0;i<n;i++){
        if(cnt==0){
            elm=arr[i];
            cnt=1;
        }
        if(arr[i]==elm){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==elm){
            cnt1++;
        }
    }
    if(cnt1>(arr.size()/2)){
        return elm;
    }
    return -1;

}