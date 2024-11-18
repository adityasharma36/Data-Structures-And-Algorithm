#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        data = value;
        prev = NULL;  
        next = NULL;
    }
};

void insertAtHead(int value,Node * & head,Node* & tail){
    if(head==NULL && tail == NULL){
        Node* newNode = new Node(value);
        head=newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head=newNode;
    }
};
void print(Node*&head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
};
void revereNode(Node*tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
}
void insertAtTail(int value,Node* & head,Node*& tail){
    if(head==NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
int getLength(Node*& head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtPosition(int place,int value,Node*&head,Node*& tail){
    int lengh= getLength(head);
    if(place == 1){
        insertAtHead(value,head,tail);
    }else if(place == lengh+1){
        insertAtTail(value,head,tail);
    }else{
        Node* backWard = head;
        for(int i = 0;i<lengh-2;i++){
            backWard= backWard->next;
        }
        Node* forward = backWard->next;
        Node* newNode = new Node(value);
        newNode->prev = backWard;
        backWard->next = newNode;
        newNode->next = forward;
        forward->prev = newNode;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    // insertAtHead(10,head,tail);
    // insertAtHead(20,head,tail);
    // print(head);
    // revereNode(tail);
    insertAtTail(10,head,tail);
    insertAtTail(20,head,tail);
    print(head);
    insertAtPosition(2,30,head,tail);
    print(head);
    return 0;
};