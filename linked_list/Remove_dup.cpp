# include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x, ListNode* next): val(x),next(next){}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* prev=head;
        ListNode* temp=head->next;
        while(temp){
          while(temp && temp->val==prev->val){
            temp=temp->next;
         }
         prev->next=temp;
         prev=prev->next;
         
        }
       return head;
    }
};

ListNode* createLL(){
    int n;
    cin>>n;
    ListNode* head=NULL;
    ListNode* tail=NULL;
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
    ListNode* l=createLL();
    Solution s;
    ListNode* head = s.deleteDuplicates(l);
    printLL(head);
}