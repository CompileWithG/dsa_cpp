#include<bits/stdc++.h>

using namespace std;
//left rotating the array by k places
//most optimal solution
void roatate(vector<int> &arr,int low,int high,int k){
    int n=arr.size();
    reverse(arr,arr+k);//O(k)
    reverse(arr+k,arr+n);//O(n-k)
    reverse(arr,arr+n);//O(n)
}