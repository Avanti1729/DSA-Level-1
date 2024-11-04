#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num1;
    cin>>n>>num1;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int target=num1-num;
        if(mpp.find(target)==mpp.end())
            cout<<num<<" "<<target<<endl;
        mpp[num]=i;
    }
    
}