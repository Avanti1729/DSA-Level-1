#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
       cin>>n;
       vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count=0,maxi=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count+=1;
                maxi=max(maxi,count);
            }
            else
                count=0;
        }
        cout<<"The maximum consecutive ones are : "<<maxi;

        

}
