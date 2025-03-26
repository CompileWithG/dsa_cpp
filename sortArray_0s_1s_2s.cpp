#include<bits/stdc++.h>

using namespace std;

//for the most optimal solution is the dutch national flag algorithm
void sort_0s_1s_2s(vector<int> &arr){
    int n=arr.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;

        }
    }
}