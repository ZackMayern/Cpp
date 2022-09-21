#include<bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* middleOfLinkedList(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* takeInput(){
    int n;
    cin >> n;
    ListNode* head;
    ListNode* tail;

    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        ListNode* newNode=new ListNode(data);
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
    ListNode* head = takeInput();
    ListNode* result = middleOfLinkedList(head);
    print(result);

    return 0;
}