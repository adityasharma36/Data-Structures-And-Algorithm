#include<iostream>
#include<string>
using namespace std;
string removeAllElementOfSubStringPart(string array,string part){
    int length = part.length();
    int find = array.find(part);
    while(find!=string::npos){
        array.erase(find,length);
        find = array.find(part);
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<"";
    }
};
int main(){
    string array = "ababc";
    string part = "ab";
    removeAllElementOfSubStringPart(array,part);
}