#include <bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>&arr,int num){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num)
            return i;
    }
    return -1;
}
int main(){
    int n,a,key;
    cin>>n;
    cin>>key;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<"The key exists at position : "<<LinearSearch(arr,key);

}