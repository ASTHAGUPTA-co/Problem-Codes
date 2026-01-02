# include <bits/stdc++.h>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  ListNode(int x): val(x),next(NULL){}
  ListNode(int x,ListNode* next): val(x),next(next){}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
      if(head==NULL) return NULL;
      if(head->next==NULL)  return head;
      ListNode* temp=head;
      int len=1;
      while(temp){
        len++;
        temp=temp->next;
        // connect last node to 1st to make it circular
        if(temp->next==NULL){
            temp->next=head;
            break;
        }
      }
    
      k=k%len;
      int ptr=len-k-1;
      ListNode* temp2 = head;
    //   travel till pointer and make pointer's next 
    //   to be new head and then point it to null
      while(ptr>0){
      ptr--;
      temp2=temp2->next;   
      }
      ListNode* newhead=temp2->next;
      temp2->next=NULL;
      return newhead;
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
    int k;
    cin>>k;
    Solution s;
    ListNode* head = s.rotateRight(l,k);
    printLL(head);
}