#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool ismorphicString(string first,string second){
    int hash[256] = {0};
    bool istCharsMapped[256] = {0};
    for(int i = 0;i<first.length();i++){
        if(hash[first[i]]==0 && istCharsMapped[second[i]]==0){
            hash[first[i]] = second[i];
            istCharsMapped[second[i]] = true;
        }
    }
    for(int i = 0;i<first.size();i++){
        if(char(hash[first[i]])!=second[i]){
            return false;
        }
    }
    return true;

};
int main(){
    string first = "paper";
    string second="title";
    cout<<ismorphicString(first,second)<<endl;
}