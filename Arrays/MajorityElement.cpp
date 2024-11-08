#include <bits/stdc++.h>
using namespace std;
int Majority(vector<int>&arr,int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(n/2))
            return it.first;
    }
    return -1;
}
int MajorityElement(vector<int>&arr,int n){
    int count=0,ele=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==ele)
            count++;
        else 
            count--;
        if(count==0)
            ele=arr[i+1];
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele)
            count1++;
    }
    if(count>(n/2))
        return ele;
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The element which is the majority is "<<MajorityElement(arr,n);
}