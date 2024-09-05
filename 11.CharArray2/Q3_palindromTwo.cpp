#include<iostream>
#include<string>
using namespace std;
bool secondPalindrom(string array,int i ,int n){
    while(i<=n){
        if(array[i]!=array[n]){
            return false;}
            i++;
            n--;
        
    }
    return true;

}
bool palindromTwo(string array){
    int n = array.length()-1;
    int i = 0;
    while(i<=n){
        if(array[i]==array[n]){
            i++;
            n--;
        }else{
            return secondPalindrom(array,i+1,n) || secondPalindrom(array,i,n-1);
        }
    }
}
int main(){
    string array = "leverl";
    cout<<palindromTwo(array);
}