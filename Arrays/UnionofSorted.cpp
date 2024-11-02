#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
       cin>>n1>>n2;
       vector<int>arr1(n1),arr2(n2);
        for(int i=0;i<n1;i++)
            cin>>arr1[i];
        for(int i=0;i<n2;i++)
            cin>>arr2[i];
        set<int>s;
        for(int i=0;i<n1;i++)
            s.insert(arr1[i]);
        for(int i=0;i<n2;i++)
            s.insert(arr2[i]);
        for(auto i:s)
            cout<<i<<" ";
}
