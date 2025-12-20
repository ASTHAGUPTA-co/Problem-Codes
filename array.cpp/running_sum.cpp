# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int sum=0;
      vector<int>ans;
      for(int i=0;i<nums.size();i++){
       sum+=nums[i];
       ans.push_back(sum);
      }  
      return ans;
    }
};
int main(){
    int n;
    cout<<"enter arr size";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    vector<int>ans=s.runningSum(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}