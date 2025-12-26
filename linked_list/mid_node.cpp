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
    ListNode* middleNode(ListNode* head) {
       ListNode* fast = head;
       ListNode* slow = head;
       while(fast!=NULL && fast->next!=NULL){
        fast= fast->next->next;
        slow=slow->next;
       } 
       return slow;
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
  ListNode* list=createLL();
  Solution s;
  ListNode* ans = s.middleNode(list);
  cout<<ans->val;
}