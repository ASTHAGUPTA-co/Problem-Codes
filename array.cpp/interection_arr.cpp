# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {  
       unordered_map<int,int>mp;
       set<int>s;//use set to avoid duplicate values
       for(int i=0;i<nums1.size();i++){
        mp[nums1[i]]++;
       }
       for(int i=0;i<nums2.size();i++){
        if(mp.find(nums2[i])!=mp.end()) s.insert(nums2[i]);
       }
       vector<int>ans(s.begin(),s.end());
       return ans;
    }
};

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int>num1(n1);
    vector<int>num2(n2);
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }
    Solution s;
    vector<int>ans = s.intersection(num1,num2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}