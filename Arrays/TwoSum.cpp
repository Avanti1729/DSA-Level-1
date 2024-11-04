#include <bits/stdc++.h>
using namespace std;
void TwoSumFirst(vector<int>&arr,int n,int num1){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int target=num1-num;
        if(mpp.find(target)==mpp.end())
            cout<<num<<" "<<target<<endl;
        mpp[num]=i;
    }
}
int main(){
    int n,num1;
    cin>>n>>num1;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==num1)
            cout<<arr[i]<<" "<<arr[j]<<endl;
        else if(arr[i]+arr[j]>num1)
            j--;
        else
            i++;
    }

}