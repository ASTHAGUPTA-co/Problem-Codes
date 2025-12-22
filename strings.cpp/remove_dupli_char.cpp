# include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeDuplicates(string &s) {
        string result;
        set<char>st;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()){
               result+=s[i];
               st.insert(s[i]);
            }
        }
        return result;
    }
};

int main(){
    string st;
    cin>>st;
    Solution s;
    string ans=s.removeDuplicates(st);
    cout<<ans;
}