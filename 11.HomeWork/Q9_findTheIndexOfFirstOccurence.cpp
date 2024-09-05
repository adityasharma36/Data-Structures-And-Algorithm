#include<iostream>
#include<vector>
#include<string>
using namespace std;
int findTheIndexOfFirstOcc(string sen,string den){
    for(int i = 0;i<=sen.size()-den.size();i++){
        for(int j= 0;j<den.size();j++){
            if(sen[i+j]!=den[j]){
            break;
        }
        else if(j==den.size()-1){
            return i;
        }
        }
    }
    return -1;
    
};
int main(){
    string sen = "hello world";
    string den = "world";
    cout<<findTheIndexOfFirstOcc(sen,den);
}