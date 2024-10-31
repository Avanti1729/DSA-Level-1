#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>&arr){
        int max=arr[0];
        int secondMax=-1;
        for(auto i:arr){
            if(i>max){
                secondMax=max;
                max=i;
            }
            else if(i<max && i>secondMax)
                secondMax=i;
        }
        return secondMax;
    }
    int secondSmallest(vector<int>&arr){
        int min=arr[0];
        int secondMin=INT_MAX;
        for(auto i:arr){
            if(i<min){
                secondMin=min;
                min=i;
            }
            else if(i!=min && i<secondMin)
                secondMin=i;
        }
        return secondMin;
    }
    int main() {
       int n,a;
       cin>>n;
       vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        cout<<"The second Largest Element "<<secondLargest(arr)<<"\n";
        cout<<"The second Smallest Element "<<secondSmallest(arr);
    }

