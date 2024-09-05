#include<iostream>
#include<string>
using namespace std;
bool reorganizeString(string senctence){
    int start = 0;
    int next = start+1;
    int end = senctence.size()-1;
    while(start<end){
        if(senctence[start]==senctence[next]){
            swap(senctence[start],senctence[end]);
            end--;
        }else{
            start++;
        }
    }
    for(int i = 0;i<senctence.size();i++){
        if(senctence[i]==senctence[i+1]){
            return false;
        }
    }
    return true;


    
}
int main(){
    string sentence = "abc";
    cout<<reorganizeString(sentence);
}