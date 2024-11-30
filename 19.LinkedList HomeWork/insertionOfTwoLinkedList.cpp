#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next= NULL;
    }
};
Node* findInterSection(Node* head1,Node* head2){
    unordered_map<int,int> map;
    Node* curr = head2;
    while(curr){
        map[curr->data]++;
        curr= curr->next;
    }
    Node* IL = NULL;
    Node*it = 0;
    curr = head1;
    while(curr){
        if(map.find(curr->data)!=map.end()){
            if(!IL){
                IL = curr;
                it = IL;
            }else{
                if(map[curr->data]>0){
                    it->next = curr;
                    it = it->next;
                    map[curr->data]--;
                }
            }
        }
        curr= curr->next;
    }
    it->next = NULL;
    
    Node* newNode= IL;
    while(newNode){
        cout<<newNode->data<<"->";
        newNode = newNode->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head1 = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fouth = new Node(4);
    Node* fifth = new Node(5);
    head1->next = second;
    second->next = third;
    third->next =fouth;
    fouth ->next = fifth;
    Node * head2 = new Node(2);
    Node* second2 = new Node(3);
    head2->next = second2;
    findInterSection(head1,head2);
    return 0;
}