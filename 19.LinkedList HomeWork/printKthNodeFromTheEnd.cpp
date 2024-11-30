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
// int getLength(Node* head){
//     int length= 0;
//     Node* temp = head;
//     while(temp){
//         length++;
//         temp = temp->next;
//     }
//     return length;
// };
// int printKthNodeFromTheEnd(Node* head,int kthElement){
//     int length = getLength(head);
//     if(kthElement>length || kthElement<=0){
//         cout<<"Invalid Input"<<endl;
//         return -1;
//     }
//     Node* newNode= head;
//     int targetElemtn= length-kthElement;
//     for(int i = 0;i<targetElemtn;i++){
//         newNode = newNode->next;
//     }
//     return newNode->data;

// }
void fun(Node* head,int  & positonFromTail,int & ans){
    if(!head) return ;
    fun(head->next,positonFromTail,ans);
    positonFromTail--;
    if(positonFromTail==0){
        ans = head->data;
    }
}
int getNode(Node* list,int positonFromTail){
    int ans = -1;
    fun(list,positonFromTail,ans);
    if(positonFromTail>0){
        cout<<"INValid input "<<endl;
        return -1;
    }
    return ans;
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fouth = new Node(4);
    Node* fifth = new Node(5);
    head->next = second;
    second->next = third;
    third->next = fouth;
    fouth->next = fifth;
    int element = 1;
    int result = getNode(head,element);
    cout<<result<<endl;
    // int result = printKthNodeFromTheEnd(head,element);
    // cout<<result<<endl;
    // cout<<getLength(head);
    // return 0;

}