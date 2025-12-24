# include <bits/stdc++.h>
using namespace std;
struct ListNode{
    ListNode* next;
    int val;
    ListNode(int x):val(x),next(NULL){}
    ListNode(int x,ListNode* next): val(x),next(next){}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* front = NULL;
         ListNode* temp=head;
         while(temp!=NULL){
          ListNode* newNode = temp;
          temp=temp->next;
          newNode->next=front;
          front=newNode;
         }
         return front;
    }
};

ListNode* createLL(){
    int n;
    cin>>n;
    ListNode* head=nullptr;
    ListNode* tail=nullptr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ListNode* newNode=new ListNode(x);
        if(head==nullptr){
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
    ListNode* newFront = s.reverseList(list);
    printLL(newFront);
}