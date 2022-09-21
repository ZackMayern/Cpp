//Question - https://leetcode.com/problems/add-two-numbers/

#include<bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* head) : val(x), next(head){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* dummyNode=new ListNode();
    ListNode* temp=dummyNode;
    int carry=0;
    
    while(l1!=NULL || l2!=NULL || carry){
        int sum=0;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        sum+=carry;
        carry=sum/10;
        ListNode* node=new ListNode(sum%10);
        temp->next=node;
        temp=temp->next;
    }
    return dummyNode->next;
}

ListNode* takeInput(){
    int n;
    cin >> n;
    ListNode* head=NULL;
    ListNode* tail=NULL;

    for(int i=0; i<n; i++){
        int data;
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
    ListNode* temp=head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
}

int main(){
    ListNode* l1=takeInput();
    ListNode* l2=takeInput();
    ListNode* result=addTwoNumbers(l1, l2);
    // cout << endl;
    // print(l1);
    // cout << endl;
    // print(l2);
    // cout << endl;
    print(result);

    return 0;
}