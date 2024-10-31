#include <bits/stdc++.h>
using namespace std;
int main() {
        vector<int>arr;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        int temp=arr[0];
        for(int i=0;i<n-1;i++)
            arr[i]=arr[i+1];
        arr[n-1]=temp;
        for(auto i:arr)
            cout<<i<<" ";
    }

