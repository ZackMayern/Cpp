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

ListNode* reverseKGroup(ListNode* head, int k){
    if(head==NULL || k==1)
        return head;
    
    ListNode* dummyNode=new ListNode(0, head);

    ListNode* previousNode=dummyNode;
    ListNode* currentNode=dummyNode;
    ListNode* nextNode=dummyNode;

    int count=0;

    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
        count++;
    }

    while(count>=k){
        currentNode=previousNode->next;
        nextNode=currentNode->next;

        for(int i=1; i<k; i++){
            currentNode->next=nextNode->next;
            nextNode->next=previousNode->next;
            previousNode->next=nextNode;
            nextNode=currentNode->next;
        }
        previousNode=currentNode;
        count-=k;
    }
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
    int k;
    ListNode* l1=takeInput();
    cin >> k;
    ListNode* result=reverseKGroup(l1, k);

    print(result);

    return 0;
}