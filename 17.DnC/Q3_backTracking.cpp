#include<iostream>
#include<string>
using namespace std;
void printPremutation(string str,int start){
    if(start>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int i = start;i<str.length();i++){
        swap(str[i],str[start]);
        printPremutation(str,start+1);
    }

};
int main(){
    string str = "abcd";
    int start = 0;
    printPremutation(str,start);
    return 0;
}