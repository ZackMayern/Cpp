#include<bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* rotateList(ListNode* head){
    if(head==NULL)
        return head;
    
    int length=1;
    ListNode* tail=head;
    while(tail->next!=NULL){
        tail=tail-next;
        length++;
    }
    k=k%length;
    if(k==0)
        return head;
    ListNode* temp=head;
    for(int i=0; i<length-k-1; i++)
        temp=temp->next;
    
    ListNode* newHead=temp->next;
    temp->next=NULL;
    tail->next=head;

    return newHead;
}

ListNode* takeInput(){
    int n;
    cin >> n;
    ListNode* head=new ListNode();

    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        ListNode* temp=new ListNode(ele);
        head->next=temp;
    }
    return head->next;
}

int main(){
    ListNode* head=takeInput();
    ListNode* result=rotateList(head);

    printList(result);
    return 0;
}