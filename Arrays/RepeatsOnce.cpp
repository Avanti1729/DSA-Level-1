#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
       cin>>n;
       vector<int>arr(n-1);
        for(int i=0;i<n-1;i++)
            cin>>arr[i];
        int xor1=0;
        for(int i=0;i<n;i++)
            xor1^==arr[i];
        cout<<"The number which is occuring once is "<<xor1;

}
