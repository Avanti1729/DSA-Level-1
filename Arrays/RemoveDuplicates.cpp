#include <bits/stdc++.h>
using namespace std; 
    vector<int> RemoveDupOne(vector<int>&arr){
        set<int> set1(arr.begin(),arr.end());
        arr.assign(set1.begin(),set1.end());
        return arr;
    }
    int RemoveDupTwo(vector<int>&arr){
        int i=0,j=1;
        while(j<arr.size()){
            if(arr[i]==arr[j])
                j++;
            else{
                i+=1;
                arr[i]=arr[j];
                j++;
            }
        }
        return i+1;
    }
    int main() {
        int n,a;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        
        cout<<"The array is : "<<"\n";
//        arr=RemoveDupOne(arr);
//        for(Integer i :arr)
//            System.out.print(i+" ");
        int i=RemoveDupTwo(arr);
        for(int j=0;j<i;j++)
            cout<<arr[j]<<" ";
    }

