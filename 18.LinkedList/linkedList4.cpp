#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
void insertValueAtHead(Node* &head,int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void print(Node*& head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
}
bool hasCycle(Node*head){
    unordered_map<Node*,bool>m;
    Node* temp = head;
    while(temp!=NULL){
        if(m[temp]==true){
            return true;
        }else{
            m[temp]= true;
        }
        temp = temp->next;
    }
    return false;
}
Node* deleteDuplicates(Node*& head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* prev = head;
    Node* curr = head->next;
    while(curr!=NULL){
        if(curr->data==prev->data){
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }else{
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}
int main(){
    Node* head = NULL;
    insertValueAtHead(head,10);
    insertValueAtHead(head,10);
    insertValueAtHead(head,10);
    deleteDuplicates(head);
    print(head);
    // cout<<hasCycle(head)<<endl;
    return 0;
}