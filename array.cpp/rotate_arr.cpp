# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //(i+k)%numssize = index where last ele will be placed after rotation
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();//k = one index less where last ele will be placed
   reverse(nums.begin(),nums.end());
   reverse(nums.begin(),nums.begin()+k);
   reverse(nums.begin()+k,nums.end());
    }     
};

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    Solution s;
    s.rotate(v,k);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}