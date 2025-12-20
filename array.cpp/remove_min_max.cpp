# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int mnele=INT_MAX,mxele=INT_MIN;
      int mnidx=0,mxidx=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]<mnele){
          mnele=nums[i];
          mnidx=i;
        } 
        if(nums[i]>mxele){
            mxele=nums[i];
            mxidx=i;
        }
      }
      // three scenarios possible
      int delfront=max(mnidx,mxidx)+1;//delete both ele from front
      int delback=n-min(mnidx,mxidx); // delete both ele from back
      int delboth=min(mnidx,mxidx) +  n-max(mnidx,mxidx)+1;//delete one from front and from back
      return min(min(delfront,delback),delboth);
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
    int ans=s.minimumDeletions(nums);
    cout<<ans;
}