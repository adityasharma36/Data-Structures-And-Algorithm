#include<iostream>
using namespace std;
bool primeNum(int numb){
    for(int j = 2;j<numb;j++){
        if(numb%j==0){
             return false;
        }
    }
    return true;
};
int main(){
    int numb;
    cout<<"enter your number upto "<<endl;
    cin>>numb;
    int count = 0;
    for(int i = 2;i<numb;i++){
        if(primeNum(i)){
            count++;
        }
    }
    cout<<count;
}