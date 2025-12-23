# include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        int n=arr.size();
        int sum=arr[n-1];
        if(n==0) return 0;
        arr.pop_back();
        return sum+arraySum(arr);
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
    int ans=s.arraySum(v);
    cout<<ans;
}