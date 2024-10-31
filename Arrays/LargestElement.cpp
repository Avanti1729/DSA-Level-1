#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
    cin>>n;
	vector<int>arr(n);
        for(int i=0;i<n;i++){
           cin>>a;
           arr.push_back(a);
        }
        int max= arr[0];
        for(auto i : arr){
            if(max<i)
                max=i;
        }
        cout<<"The Largest Element in Array is "<<max;
    }

