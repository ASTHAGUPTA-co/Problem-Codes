# include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode* next): val(x) , next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy= new ListNode(-1);
     ListNode* curr=dummy;
     ListNode* temp1=l1;
     ListNode* temp2=l2;
     int carry=0;
     while(temp1!=NULL || temp2!=NULL){
        int sum=carry;
        if(temp1) sum+=temp1->val;
        if(temp2) sum+=temp2->val;
        ListNode* newnode = new ListNode(sum%10);
        carry=sum/10;
        curr->next=newnode;
        curr=curr->next;
        
        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
     }
      if(carry){
        ListNode* newNode = new ListNode(carry);
        curr->next=newNode;
      }
      return dummy->next;
    }
};

ListNode* createLL(){
    int n;
    cin>>n;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ListNode* newNode = new ListNode(x);
        if(head==NULL){
            head=tail=newNode;
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
    ListNode* l1=createLL();
    ListNode* l2=createLL();
    Solution s;
    ListNode* head = s.addTwoNumbers(l1,l2);
    printLL(head);
}