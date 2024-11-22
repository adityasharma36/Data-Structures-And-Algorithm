#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};
Node* insertAtHead(int value,Node*&head,Node*&tail){
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}
Node* middleElement(Node*&head){
    Node* slow = head;
    Node*fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;

        }
    }
    return slow;
}

Node* reverseList(Node*&prev,Node*&curr){
    if(curr==NULL){
        return prev;
    }
    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    return reverseList(prev,curr);
}
Node* reverseLists(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* newHead = reverseList(prev,curr);
    Node* temp = newHead;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<"NUll"<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    middleElement(head);
    print(head);
    // reverseLists(head);

    return 0;
}