#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n=matrix.size(),m=matrix[0].size();
     int s=0,e=n*m-1;
     while(s<=e){
        int mid=(s+e)/2;
        int row=mid/m,col=mid%m;
        if(matrix[row][col]==target){
            return true;
        }else if(matrix[row][col]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
     }   
     return false;
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int target;
    cin>>target;
    bool ans;
    Solution s;
    ans=s.searchMatrix(v,target);
    cout<<ans;
}