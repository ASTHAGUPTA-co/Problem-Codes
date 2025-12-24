#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
     int n=mat.size();
     int m=mat[0].size();
     int count=0,mx=0;
     vector<int>ans;
     vector<pair<int,int>>v;
     for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<m;j++){
         if(mat[i][j]==1) count++; 
        }   
         
        if(count>mx){
            mx=count; 
            v.push_back({i,count});  
        }
     }
     for(auto it:v){
        if(it.second==mx){
            ans.push_back(it.first);
            ans.push_back(it.second);
            return ans;
        }
     }      
     return {0,0};
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>ans;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    Solution s;
    ans=s.rowAndMaximumOnes(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}