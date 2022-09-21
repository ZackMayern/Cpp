#include<bits/stdc++.h>

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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
    ListNode* result=new ListNode();
    ListNode* tail=result;

    while(l1 && l2){
        if(l1->val < l2->val){
            tail->next=l1;
            l1=l1->next;
        }
        else{
            tail->next=l2;
            l2=l2->next;
        }
        tail=tail->next;
    }

    if(l1)
        tail->next=l1;
    else if(l2)
        tail->next=l2;

    return result->next;
}

void print(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
}

int main(){
    ListNode* l1=takeInput();
    ListNode* l2=takeInput();
    ListNode* result=mergeTwoLists(l1, l2);

    print(result);
    return 0;
}