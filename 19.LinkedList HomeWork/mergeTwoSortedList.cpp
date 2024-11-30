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
Node* mergeTwoLists(Node* left,Node* right){
    if(!left) return right;
    if(!right) return left;

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left && right){
        if(left->data >= right->data){
            temp->next = right;
            temp = right;
            right = right->next;
        }else{
            temp->next = left;
            temp = left;
            left = left->next;
        }
    }
    if(left){
        temp->next = left;
    }
    if(right){
        temp->next = right;
    }
    Node* print = ans->next;
    while(print){
        cout<<print->data<<"->";
        print = print->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head1 = new Node(1);
    Node* second = new Node(3);
    Node* third = new Node(5);
    head1->next = second;
    second->next = third;
    Node* head2 = new Node(2);
    Node* fourth = new Node(4);
    Node* fifth = new Node(6);
    head2->next = fourth;
    fourth->next = fifth;
    mergeTwoLists(head1,head2);
}