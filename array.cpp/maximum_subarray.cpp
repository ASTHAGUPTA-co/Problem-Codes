# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int mxsum=INT_MIN,sum=0;
     for(int i=0;i<nums.size();i++){
       sum+=nums[i];
       mxsum=max(mxsum,sum);
       if(sum<0){// if at any time csum becomes -ve by addiing curr ele dont add it stop the length of subarray and make sum 0
        sum=0;
       }    
     }
     return mxsum;
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
    int ans=s.maxSubArray(v);
    cout<<ans;
}