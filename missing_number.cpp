#include<bits/stdc++.h>

using namespace std;

//for 1 to 5(n) --> 1,2,3,4,5
//arr[]=1,2,4,5
//missing_number =3
//using XOR to find missing number
//we can use the same logic to find the number that appears once when others appears twice
int missing_number(vector<int> &arr,int n){
    int a1=0;
    int a2=0;
    for(int i=1;i<=n;i++){
        a1=a1^i;
    }
    for(int i=0;i<n;i++){
        a2=a2^arr[i];
    }
    return a1^a2;
}