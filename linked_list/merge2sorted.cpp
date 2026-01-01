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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode(-1); // take a dummy node (-1) this will point to 1st node of final LL 
        ListNode* temp1 =temp;
        while(list1!=NULL || list2!=NULL){
            if(!list1){
               temp1->next=list2;
               list2=list2->next;
            }else if (!list2){
               temp1->next=list1;
               list1=list1->next;
            }else if(list1 && list1->val<=list2->val){
                temp1->next=list1;
                list1=list1->next;     
            }else if(list2 && list2->val<list1->val){
                temp1->next=list2;
                list2=list2->next;
            }
            temp1=temp1->next;
        }

        return temp->next;
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
    ListNode* head = s.mergeTwoLists(l1,l2);
    printLL(head);
}