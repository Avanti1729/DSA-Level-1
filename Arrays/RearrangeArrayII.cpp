#include<bits/stdc++.h>
using namespace std;

  vector<int> RearrangebySign(vector<int>a, int n){
  vector<int> pos,neg;
  for(int i=0;i<n;i++){
      if(a[i]>0) pos.push_back(a[i]);
      else neg.push_back(a[i]);
  }
  if(pos.size() < neg.size()){
    for(int i=0;i<pos.size();i++){
      
      a[2*i] = pos[i];
      a[2*i+1] = neg[i];
    }
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        a[index] = neg[i];
        index++;
    }
  }
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      a[2*i] = pos[i];
      a[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        a[index] = pos[i];
        index++;
    }
  }
  return a;
    
}

int main() {
    
  // Array Initialisation.
  int n = 6;
  vector<int> A {1,2,-4,-5,3,4};

  vector<int> ans = RearrangebySign(A,n);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}