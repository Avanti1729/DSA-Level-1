#include<bits/stdc++.h>
using namespace std;
bool CheckSorted(vector<int>&arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i])
                return false;
        }
        return true;
    }
    int main() {
        int n,a;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        cout<<"The array is sorted : "<<CheckSorted(arr);
    }

