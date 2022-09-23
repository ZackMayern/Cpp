#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(0), next(next) {}
};

ListNode* reverseList(ListNode* head){
    ListNode* previous=NULL;
    ListNode* current=head;

    while(current){
        ListNode* temp;
        temp=current->next;
        current->next=previous;
        previous=current;
        current=temp;
    }
    return previous;
}

bool checkPalindrome(ListNode* head){
    if(head==NULL || head->next==NULL)
        return true;
    
    ListNode* slow=head;
    ListNode* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    slow->next=reverseList(slow->next);
    slow=slow->next;

    while(slow!=NULL){
        if(head->val!=slow->val)
            return false;
        head=head->next;
        slow=slow->next;
    }
    return true;
}

ListNode* takeInput(){
    int n;
    cin >> n;

    ListNode* head=new ListNode();
    ListNode* temp=head;

    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        ListNode* newNode=new ListNode(data);

        temp->next=newNode;
        temp=temp->next;
    }
    return head->next;
}
int main(){
    ListNode* head=takeInput();
    bool result=checkPalindrome(head);

    if(result)
        cout << "true";
    else
        cout << "false";

    return 0;
}