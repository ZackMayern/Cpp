#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

bool detectCycle(ListNode* l1){
    ListNode* fast=l1;
    ListNode* slow=l1;

    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            return true;
    }
    return false;
}

ListNode* takeInputandLink(int pos){
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
    ListNode* last=temp;
    temp=head;
    if(pos>=0){
        for(int i=0; i<=pos; i++){
            temp=temp->next;
        }
        last->next=temp;
    }
    return head->next;
}

// void print(ListNode* head){
//     ListNode* temp=head;
//     for(int i=0; i<15; i++){
//         cout << temp->val << " ";
//         temp=temp->next;
//         if(temp==NULL)
//             break;
//     }
// }

int main(){
    int pos;
    cin >> pos;
    ListNode* l1=takeInputandLink(pos);
    bool result=detectCycle(l1);

    if(result)
        cout << "true";
    else
        cout << "false";

    return 0;
}