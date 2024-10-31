#include <bits/stdc++.h>
using namespace std;
vector<int> move(vector<int>&arr){
        int zeroCount = count(arr.begin(),arr.end(),0);
        arr.erase(remove(arr.begin(),arr.end(),0),arr.end());
        for(int i=0;i<zeroCount;i++)
            arr.push_back(0);
        return arr;
 }
 vector<int> moveOptimal(vector<int>&arr){
        int i=0,j=0;
        while(j<arr.size()){
            if(arr[i]!=0){
                i++,j++;
            }
            else if(arr[i]==0 && arr[j]!=0){
                swap(arr[i],arr[j]);
                i++,j++;
            }
            else 
               j++;
        }
 }
int main() {
        int n,a;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        moveOptimal(arr);
        for(auto it:arr)
            cout<<it<<" ";

    }
