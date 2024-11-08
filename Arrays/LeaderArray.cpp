#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n),ans;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==n-1 || arr[i]>maxi){
            maxi=arr[i];
            ans.push_back(maxi);
        }
    }
    cout<<"The leaders of the array : ";
    for(auto i:ans)
        cout<<i<<" ";
}