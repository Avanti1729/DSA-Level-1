#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int minPrices=arr[0];
    int maxProfit = 0;
    for(int i=1;i<n;i++){
        int cost=arr[i]-minPrices;
        maxProfit=max(maxProfit,cost);
        minPrices=min(minPrices,arr[i]);
    }
    cout<<"The maximum Profit is : "<<maxProfit;
}