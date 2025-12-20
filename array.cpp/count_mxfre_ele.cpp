# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int mxfre=INT_MIN;
        for(auto it:mp){
            if(it.second>mxfre){
                mxfre=it.second;
            }
        }
        int ans=0;
        for(auto it: mp){
            if(it.second==mxfre) ans+=it.second;
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
    int ans=s.maxFrequencyElements(v);
    cout<<ans;
}