#include<iostream>
#include<string>
using namespace std;
int checkPalindrom(string sentence,bool& isCheck,int start,int end){
    if(start>=end){
        isCheck= true;
    }
    if(sentence[start]!=sentence[end]){
        return false;

    }
    checkPalindrom(sentence,isCheck,start+1,end-1);
    return isCheck;
}
int main(){
    string str = "anna";
    bool isCheck = false;
    int start = 0;
    int end = str.size()-1;
    int result = checkPalindrom(str,isCheck,start,end);
    if(result){
        cout<<"given string is palindrom "<<endl;

    }else{
        cout<<"given string is not a palindrom"<<endl;
    }
}
