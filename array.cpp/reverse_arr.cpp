# include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr , int m) {
    //take two pointers one from where arr has to be reversed, one at last and swap
    int i=m+1,j=arr.size()-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int m;
    cout<<"enter reversing index";
    cin>>m;
    vector<int>arr(n);
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,m);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}