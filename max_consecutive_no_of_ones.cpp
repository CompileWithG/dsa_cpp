#include<bits/stdc++.h>

using namespace std;



int max_consecutive_no_of_ones(vector<int> &arr){
    int n=arr.size();
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }

    }
    return maxi;
}