void reverseArray(vector<int> &arr , int m) {
    //take two pointers one from where arr has to be reversed, one at last and swap
    int i=m+1,j=arr.size()-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}