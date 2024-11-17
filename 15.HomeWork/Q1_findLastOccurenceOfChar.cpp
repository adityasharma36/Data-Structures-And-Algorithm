#include<iostream>
#include<string>
using namespace std;
int findLastOccurencOfChar(string sentence,char character,int index,int end,int& store){
    if(index>=end){
        return store;
    }
    if(sentence[index]==character){
            store = index;
        }
    
    findLastOccurencOfChar(sentence,character,index+1,end,store);
    return store;
}

int main(){
    string sentence = "Aditya Sharma";
    char character = 'a';
    int index = 0;
    int end = sentence.size();
    int store = -1;
    int result = findLastOccurencOfChar(sentence,character,index,end,store);
    cout<<result<<" ";
}