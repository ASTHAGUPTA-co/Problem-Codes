#include <bits/stdc++.h> 
using namespace std;
class Solution {
  public:
  //takes each row of the mat and returns first idx(no of ele < median or mid) where it is > mid or median
  // of whole mat since the row is sorted it returns no of ele < median or mid
    int upperBound(vector<int>&arr,int x,int n){
        int low=0,high=n-1;
        int ans=n;//default to n if no ele>x is found
        while(low<=high){
         int mid=(low+high)/2;
            if(arr[mid]>x){
              ans=mid;
              high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    
    int countSmallEqual(vector<vector<int>>&mat,int n,int m,int x){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=upperBound(mat[i],x,m);//sums the count of ele from each row that are <= mid
        }
        return cnt;
    }
    int median(vector<vector<int>> &mat) {
        int low=INT_MAX;int high=INT_MIN;
        int n=mat.size(); int m=mat[0].size();
        for(int i=0;i<n;i++){
            low=min(low,mat[i][0]);//minele of whole mat
            high=max(high,mat[i][m-1]);//maxele of whole mat
        }
        
        int req=(n*m)/2;//this is fixed but mid changes every time 
        //to find first ele where (no of ele<=mid)>req >req
        while(low<=high){
            int mid=(low+high)/2;
            int smallEqual = countSmallEqual(mat,n,m,mid);
            if(smallEqual<=req) low=mid+1;
            else high =mid-1;
        }
        return low;
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
    Solution s;
    int ans=s.median(v);
    cout<<ans;
}