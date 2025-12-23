#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     vector<int>ans;
     int n=matrix.size();
     int m=matrix[0].size();
     int left=0,right=m-1,top=0,bottom=n-1;
     while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]);
     }  
     top++;
     for(int i=top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);
     }
     right--;
     if(top<=bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
     }
     if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
     }
     }
     return ans;
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
    ans=s.spiralOrder(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}