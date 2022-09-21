#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* takeInput(){
    int n;
    cin >> n;

    ListNode* head=NULL;
    ListNode* tail=NULL;
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

ListNode* removeNthFromEnd(ListNode* head, int target){
    ListNode* dummyNode=new ListNode(0, head);
    ListNode* fast=dummyNode;
    ListNode* slow=dummyNode;

    for(int i=1; i<=target; i++)
        fast=fast->next;

    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;

    return dummyNode->next;
}

void print(ListNode* head){
    ListNode* temp=head;

    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
}

int main(){
    ListNode* l=takeInput();
    int target;
    cin >> target;
    
    ListNode* result=removeNthFromEnd(l, target);
    print(result);
    
    return 0;
}