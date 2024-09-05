#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subString(string str,string output,int start){
    if(start>=str.length()){
        cout<<output<<endl;
        return;
    }
    subString(str,output,start+1);
    output.push_back(str[start]);
    subString(str,output,start+1);
    }
int main(){
    string str = "abc";
    string output = "";
    int start = 0;
    subString(str,output,start);

}