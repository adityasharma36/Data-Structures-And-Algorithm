#include<iostream>
#include<vector>
using namespace std;
int calculateLength(char array[]){
    int length = 0;
    int i = 0;
    while(array[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int reverseGivenString(char array[]){
    int length = calculateLength(array)-1;
    // for(int i = length ; i>=0;i--){
    //     cout<<array[i]<<"";
    // }
    int start = 0;
    while(start<=length){
        swap(array[start],array[length]);
        start++;
        length--;
    }
}
int main(){
    char array[100];
    cout<<"enter your string "<<endl;
    cin.getline(array,100);
    reverseGivenString(array);
}