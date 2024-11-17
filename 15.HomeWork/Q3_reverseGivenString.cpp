#include<iostream>
#include<string>
using namespace std;
void reverseGivenString(string sentence,int index){
    if(index<0){
        return;
    }
    cout<<sentence[index];
    reverseGivenString(sentence,index-1);
};
int main(){
    string sentece = "aditya sharma";
    int index = sentece.size()-1;
    reverseGivenString(sentece,index);
}