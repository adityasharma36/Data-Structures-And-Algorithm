#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int data)
    {
        value = data;
        next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp){
        cout<< temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
void deteleNnodeAfterMnodeInLinkedList(Node *&head, int deleteElement, int afterElement) {
    if(!head) return;

    Node* it = head;
    for(int i = 0;i<afterElement-1;i++){
        if(!it) return;
        it= it->next;
    }
    if(!it) return;
    Node* MthNode = it;
    it = MthNode->next;
    for(int i = 0;i<deleteElement;i++){
        if(!it) break;
        Node * temp = it->next;
        delete it;
        it = temp;
    }
    MthNode->next = it;
    deteleNnodeAfterMnodeInLinkedList(it,deleteElement,afterElement);
}
int main()
{
    int deleteElement = 1;
    int afterElement = 2;
    Node *head = new Node(9);
    Node* second = new Node(1);
    Node* third = new Node(3);
    Node* fouth = new Node(5);
    Node * fifth = new Node(9);
    head->next = second;
    second->next = third;
    third->next = fouth;
    fouth->next = fifth;
    deteleNnodeAfterMnodeInLinkedList(head,deleteElement,afterElement);
    print(head);
}