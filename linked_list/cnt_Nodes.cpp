# include <bits/stdc++.h>
using namespace std;

struct Node{
    Node* next;
    int data;
    Node(int x): data(x),next(nullptr){}
    Node(int x,Node* next) : data(x),next(next){}
};

class Solution {
  public:
    int getCount(Node* head) {
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;  
    }
};

Node* createLL(){
    int n;
    cin>>n;
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* newNode=new Node(x);
        if(head==nullptr){
          head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}

void printLL(Node* head){
   while(head){
    cout<<head->data<<" ";
    head=head->next;
   }
}


int main(){
    Node* list=createLL();
    Solution s;
    int ans=s.getCount(list);
    cout<<ans;
}