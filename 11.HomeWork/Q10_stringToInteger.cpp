#include<iostream>
#include<string>
using namespace std;
int stringToInt(string array){
    int interger = atoi(array.c_str());
    return interger;
};
int main(){
    string array = "123";
    cout<<stringToInt(array);
}