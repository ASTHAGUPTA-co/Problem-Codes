# include <bits/stdc++.h>
using namespace std;
//string functions
//isalnum,tolower(),toupper(),s.length()

class Solution{
public:
      string removeNonAlphabets(string s){
        string result="";
        for(auto ch:s){
          if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            result+=ch;
          }
        }
        return result;
      }
};

int main(){
    string st;
    cin>>st;
    Solution s;
    string ans=s.removeNonAlphabets(st);
    cout<<ans;
}