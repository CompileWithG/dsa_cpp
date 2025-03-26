#include<bits/stdc++.h>

using namespace std;
//a negative prefix sum reduces the total sum ,so we discard it and start fresh
//we keep track of the best possible sum at every step

pair<int,int> kadanes_algo(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    int start_index;
    int end_index;
    int max_sum=0;    
    for(int i=0;i<n;i++){
        if(sum<=0){
            sum=arr[i];
            start_index=i;

        }
        else{
            sum+=arr[i];
            if(sum>max_sum){
                end_index=i;
                max_sum=max(max_sum,sum);
            }
        }

    }
    return {start_index,end_index};
}