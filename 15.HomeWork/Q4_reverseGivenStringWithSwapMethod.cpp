#include<iostream>
#include<string>
using namespace std;
void reverseGivenString(string& chara,int start ,int end){
    if(start>end){
        return;
     }
     swap(chara[start],chara[end]);
     reverseGivenString(chara,start+1,end-1);
}
int main(){
    string str = "adity";
    int start = 0;
    int end = str.size()-1;
    reverseGivenString(str,start,end);
    cout<<str<<endl;
}