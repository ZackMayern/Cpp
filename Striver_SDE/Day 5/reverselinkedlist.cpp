#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head){
    if(!head)
        return NULL;
    
    ListNode* newHead = head;
    if(head->next){
        newHead=reverseList(head->next);
        head->next->next=head;
    }
    head->next=NULL;
    return newHead;
}

ListNode* takeInput(){
    int n;
    int data;
    cin >> n;

    ListNode* head;
    ListNode* tail;
    
    for(int i=0; i<n; i++){
        cin >> data;
        ListNode* newNode = new ListNode(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
    }
    return head;
}

void print(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    // ListNode* head=new ListNode();
    // ListNode* one=new ListNode();
    // ListNode* two=new ListNode();
    // ListNode* three=new ListNode();
    // head->val=0;
    // head->next=one;
    // one->val=1;
    // one->next=two;
    // two->val=2;
    // two->next=three;
    // three->val=3;
    // three->next=NULL;
    ListNode* head = takeInput();
    ListNode* result = reverseList(head);

    print(result);
    return 0;
}