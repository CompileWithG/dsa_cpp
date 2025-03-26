#include<bits/stdc++.h>

using namespace std;


//arr1[]={1,1,2,3,4,5}
//arr2[]={2,3,4,4,5,6}
//union[]={1,2,3,4,5,6} unique
 vector<int> union_sorted(vector<int> &arr1,vector<int> &arr2,int n1,int n2){
    int i=0;
    int j=0;
    vector<int> unionarr;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionarr.size()==0||unionarr.back()!=arr1[i]){
                unionarr.push_back(arr1[i]);
            }           
        }
        else{
            if(unionarr.size()==0|| unionarr.back()!=arr2[j]){
                unionarr.push_back(arr2[j]);
            }
        }
    }
    while(i<n1){
        if(unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i++]);
        }
        else{
            i++;
        }
    }
    while(j<n2){
        if(unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j++]);
        }
        else{
            j++;
        }
    }
    return unionarr;
 }