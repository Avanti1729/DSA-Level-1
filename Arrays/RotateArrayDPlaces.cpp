#include<bits/stdc++.h>
using namespace std;
    vector<int> RotateDPlaces(vector<int>&arr,int d,int n){
        vector<int>temp(d);
        for(int i=0;i<d;i++)
            temp[i]=arr[i];
        for(int i=d;i<n;i++)
            arr[i-d]=arr[i];
        for(int i=0;i<d;i++){
            arr[n-d+i]=temp[i];
        }
        return arr;
    }
    vector<int> RotatePlaces(vector<int>&arr,int d,int n){
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        return arr;
    }
    int main() {
        int n,a;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        int d;
        cin>>d;
        d=d%n;
        arr=RotatePlaces(arr,d,n);
        for(int k: arr)
            cout<<k<<" ";
    }

