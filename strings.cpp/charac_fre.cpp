# include <bits/stdc++.h>
using namespace std;

class Solution{
public:
     void printfre(string s){
        int fre[26]={0};
        for(int i=0;i<s.size();i++){
            fre[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(fre[i]!=0){
                cout<<(char)(i+'a')<<fre[i]<<" ";
            }
        }
     }
};

int main(){
    string st;
    cin>>st;
    Solution s;
    s.printfre(st);
}