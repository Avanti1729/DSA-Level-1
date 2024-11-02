#include <bits/stdc++.h>
using namespace std;
set<int> UnionsortedOne(vector<int>&arr1,vector<int>&arr2,set<int>&s,int n1,int n2){
    for(int i=0;i<n1;i++)
            s.insert(arr1[i]);
        for(int i=0;i<n2;i++)
            s.insert(arr2[i]);
        for(auto i:s)
            cout<<i<<" ";
}
vector<int> UnionsortedTwo(vector<int>&arr1,vector<int>&arr2,vector<int>&uniArray){
    int i=0,j=0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (uniArray.empty() || uniArray.back() != arr1[i]) {
                uniArray.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (uniArray.empty() || uniArray.back() != arr2[j]) {
                uniArray.push_back(arr2[j]);
            }
            j++;
        } else {
            if (uniArray.empty() || uniArray.back() != arr1[i]) {
                uniArray.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < arr1.size()) {
        if (uniArray.empty() || uniArray.back() != arr1[i]) {
            uniArray.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size()) {
        if (uniArray.empty() || uniArray.back() != arr2[j]) {
            uniArray.push_back(arr2[j]);
        }
        j++;
    }
    return uniArray;
}
int main(){
    int n1,n2;
       cin>>n1>>n2;
       vector<int>arr1(n1),arr2(n2),unionArray;
        for(int i=0;i<n1;i++)
            cin>>arr1[i];
        for(int i=0;i<n2;i++)
            cin>>arr2[i];
        unionArray=UnionsortedTwo(arr1,arr2,unionArray);
        for(auto i:unionArray)
            cout<<i<<" ";

}
