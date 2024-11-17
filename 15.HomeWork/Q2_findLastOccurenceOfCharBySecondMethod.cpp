#include<iostream>
#include<string>
using namespace std;
int findLastOccurenceOfCharBySecondMethods(string sent,char chara,int index,int& ans){
    if(index<0){
        return ans;
    }
    if(sent[index]==chara){
        ans = index;
        return ans;
    }
    findLastOccurenceOfCharBySecondMethods(sent,chara,index-1,ans);
}
int main(){
    string sent = "Aditya sharma";
    char chara = 'k';
    int index = sent.size()-1;
    int ans = -1;
    findLastOccurenceOfCharBySecondMethods(sent,chara,index,ans);
    cout<<ans<<endl;
}