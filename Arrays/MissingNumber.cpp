#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
       cin>>n;
       vector<int>arr(n-1);
        for(int i=0;i<n-1;i++)
            cin>>arr[i];
        int xor1=0,xor2=0;
        for(int i=0;i<n-1;i++){
            xor1^=(i+1);
            xor2^=arr[i];
        }
        xor1^=n;
        cout<<"The missing number is "<<(xor1^xor2);

}
