#include <bits/stdc++.h>
using namespace std;
int LongestConsecutiveI(vector<int>arr,int n){
    int seq=1,largestSeq=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
            continue;
        if(arr[i]==arr[i-1]+1)
            seq++;
        else    
            seq=1;
    largestSeq=max(largestSeq,seq);
    }
    return largestSeq;
}
int LongestConsecutiveII(vector<int>arr,int n){
    if(n==0)  return 0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++)
        st.insert(arr[i]);
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x+=1;
                cnt+=1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}
int main() {
    vector<int> arr = {100, 4,9, 200, 1, 3, 2,5,6,7,8,8,9,10};
    int n = arr.size();
    cout << "Longest consecutive sequence length: " << LongestConsecutiveII(arr, n) << endl;
    return 0;
}