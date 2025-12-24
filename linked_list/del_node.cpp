# include <bits/stdc++.h>
using namespace std;

struct ListNode{
    ListNode* next;
    int val;
    ListNode(int x):val(x),next(NULL){}
    ListNode(int x,ListNode* next): val(x),next(next){}
};


class Solution{
public:
   void deleteNode(ListNode* node){
    node->val=node->next->val;
    node->next=node->next->next;
   }
};

ListNode* createll(){
    int n;
    cin>>n;
    ListNode* head=nullptr;
    ListNode* tail=nullptr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ListNode* newNode=new ListNode(x);
        if(head==nullptr){
         head=newNode;
         tail= newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}

void printLL(ListNode* head){
    while(head){
      cout<<head->val<<" ";
      head=head->next;
    }
}

int main(){
    ListNode* list=createll();   
    Solution s;
    int x;
    cout<<"enter node to be deleted";
    cin>>x;
    ListNode* temp=list;// first find the node to be deleted in LL
    while(temp!=NULL && temp->val!=x){
        temp=temp->next;
    }
    s.deleteNode(temp);
    printLL(list); 
}