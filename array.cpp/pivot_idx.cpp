# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int totsum=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        totsum+=nums[i];
      }  
      int pivot=-1,currsum=0;
      for(int i=0;i<n;i++){
        currsum+=nums[i];
        //if rightsum == leftsum of pivot, rightsum=totsum-currsum
        if(totsum-currsum==currsum-nums[i]){
            pivot=i;
            break;
        }
      }
      return pivot;
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
    int ans=s.pivotIndex(v);
    cout<<ans;  
}