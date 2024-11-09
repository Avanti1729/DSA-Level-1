#include <bits/stdc++.h>
using namespace std;

int longestSubarrayI(vector<int>& a, int n, long long k) {
    map<long long, int> presumMap; 
    long long sum = 0;  
    int maxLen = 0;
    
    for (int i = 0; i < n; i++) { 
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (presumMap.find(rem) != presumMap.end()) {
            int len = i - presumMap[rem]; 
            maxLen = max(maxLen, len);
        }
        if (presumMap.find(sum) == presumMap.end()) {
            presumMap[sum] = i;
        }
    }
    
    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 0, 0, 3};
    long long k = 6;
    int n = arr.size();
    cout << "The length of the longest subarray is: " << longestSubarrayI(arr, n, k) << endl;
    
    return 0;
}
