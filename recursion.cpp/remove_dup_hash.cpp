#include <bits/stdc++.h> 
using namespace std;
class Solution{
public:
  vector<int> removeDuplicates(vector<int>&arr) {
  vector<int>ans;
  int hash[100001]={0};
  for(int i=0;i<arr.size();i++){
    if(hash[arr[i]]==0){
      ans.push_back(arr[i]);
      hash[arr[i]]++;
    }
   }
   return ans;
  }
};

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    Solution s;
    vector<int>ans;
    ans=s.removeDuplicates(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

