#include<bits/stdc++.h>
using namespace std;
    int main() {
        int n;
        cin>>n;
        vector<int>nums(n),ans(n);
        int pos=0,neg=1;
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
            else{
                ans[pos]=nums[i];
                pos+=2;
            }
        }
        for(auto i:ans)
            cout<<i<<" ";
    }

