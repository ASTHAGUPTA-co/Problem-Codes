# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
     int n=nums.size();
     for(int i=0;i<n;i++){
        if(cnt1==0 && ele2!=nums[i]){
            ele1=nums[i];
            cnt1=1;
        }else if(cnt2==0 && ele1!=nums[i]){
            ele2=nums[i];
            cnt2=1;
        }else if(nums[i]==ele1){
            cnt1++;
        }else if(nums[i]==ele2){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
     }
     cnt1=0,cnt2=0;
     int fre=n/3;
     for(int i=0;i<n;i++){
      if(nums[i]==ele1) cnt1++;
      if(nums[i]==ele2) cnt2++;
     }
     vector<int>ans; 
     if(cnt1>fre) ans.push_back(ele1);
     if(cnt2>fre) ans.push_back(ele2);
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
    vector<int>ans;
    Solution s;
    ans=s.majorityElement(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" 23";
    }
}