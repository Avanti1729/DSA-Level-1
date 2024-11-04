#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0,maxi=LONG_MIN;
    int start=0,ansStart=0,ansEnd=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
             start=i+1;
        }
        
    }
    cout<<"The maximum subarray is "<<maxi<<" and it ranges from  "<<ansStart<<" - "<<ansEnd<<endl;
}