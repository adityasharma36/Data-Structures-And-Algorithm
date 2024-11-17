#include<iostream>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     }
// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fouth = new Node(40);
//     Node* fifth = new Node(50);
//     first->next= second;
//     second->next = third;
//     third->next = fouth;
//     fouth->next = fifth;
//     cout<<"printing the LL "<<endl;
//     print(first);
//     return 0;
// }

// class Node{
//     public:
//     int data;
//     Node* next;
     
//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtHead(Node* & head,int data){
//     Node* newNode = new Node(data);
//     newNode->next =head;
//     head = newNode; 
// }
// void print(Node*head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
// }
// int main(){
//     Node* head = new Node(10);
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtHead(head,40);
//     print(head);
//     return 0;
// }


// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtHead(Node* & head,Node*&tail,int data){
//     Node* newNode = new Node(data);
//     newNode->next = head;
//     if(head==NULL){
//         tail = newNode;
//     }
//     head = newNode;
// }
// void insertAtTail(Node*&head,Node*&tail,int data){
//     Node*newNode = new Node(data);
//     if(tail==NULL){
//         tail= newNode;
//         head = newNode;
//     }else{
//         tail->next = newNode;
//     }
//     tail=newNode;
// }
// void print(Node*head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = NULL;
//     Node*tail = NULL;
//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,30);
//     insertAtHead(head,tail,40);
//     insertAtTail(head,tail,50);
//     insertAtTail(head,tail,60);
//     print(head);
//     return 0;
// }


// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     head->next = second;
//     second->next = third;
//     print(head);
//     return 0;
// }
// class Node{
//     public:
//     int data;
//     Node* clear;
//     Node(){
//         this->clear = NULL;
//         this->data= 0;
//     }
//     Node(int data){
//         this->clear = NULL;
//         this->data = data;
//     }
// };
// void insertAtHead(Node*&head,int data){
//     Node* newNode = new Node(data);
//     newNode->clear = head;
//     head = newNode;
// }
// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->clear;
//     }
// }
// int main(){
//     Node* head = new Node(10);
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtHead(head,40);
//     insertAtHead(head,50);
//     print(head);
//     return 0;
// }

// class Node{
//     public:
//     int data;
//     Node* next;
    
//     Node(){
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtHead(Node*&head,Node*&tail,int data){
//     Node* newNode = new Node(data);
//     newNode->next = head;
//     if(head==NULL){
//         tail = newNode;
//     }
//     head = newNode;
// };
// void insertAtTail(Node*&head,Node*&tail,int data){
//     Node* newNode = new Node(data);
//     if(tail==NULL){
//         tail = newNode;
//         head = newNode;
//     }else{
//         tail->next = newNode;
//     }
//     tail = newNode;
// };
// void check(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = NULL;
//     Node*tail = NULL;
//     insertAtHead(head,tail,10);
//     insertAtHead(head,tail,20);
//     insertAtTail(head,tail,10);
//     insertAtTail(head,tail,20);
//     check(head);
//     return 0;
// }


class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data= value;
        this->next= NULL;
    }
};
Node* insertAtHead(int value,Node*&head,Node*&tail){
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);
        newNode->next=head;
        head=newNode;
    }
    return head;
}
void insertAtTail(int value,Node*&head,Node*&tail){
    if(head==NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<"NUll"<<endl;
}
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAtPosition(int position,int value,Node*& head,Node*& tail){
    int length = getLength(head);
    if(position==1){
        head = insertAtHead(value,head,tail);
    }else if(position==length+1){
        insertAtTail(value,head,tail);
    }else{
        Node* temp = head;
        for(int i = 0;i<length-2;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next=temp->next;
        temp->next = newNode;
    }
}
void deteNodeFromLL(int position,Node*&head,Node*&tail){
    if(head==NULL && tail==NULL){
        cout<<"No Nodes to delte" <<endl;
        return;
    }
    if(head==tail){
        Node*temp = head;
        head=NULL;
        tail==NULL;
        delete temp;
    }else{
        if(position==1){
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }else{
            Node* prev = head;
            for(int i = 0;i<position-2;i++){
                prev= prev->next;
            }
            Node* curr= prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(101,head,tail);
    insertAtPosition(1,42,head,tail);
    insertAtPosition(3,2,head,tail);
    insertAtPosition(4,4,head,tail);
    insertAtPosition(5,30,head,tail);
    insertAtPosition(6,40,head,tail);
    print(head);
    deteNodeFromLL(6,head,tail);
    print(head);
    return 0;
}