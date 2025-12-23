# include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTillN(int n) {
        if(n==0) return;
        printTillN(n-1);
        cout<<n<<" ";
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    s.printTillN(n);
}