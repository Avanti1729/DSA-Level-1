#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num1;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1)
            mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(auto i:arr)
        cout<<i<<" ";
}