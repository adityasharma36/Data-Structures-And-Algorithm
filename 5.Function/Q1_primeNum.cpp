#include<iostream>
using namespace std;
bool primeNum(int number){
    if(number<=1){
        return false;
    }else{
    for(int i = 2;i<number;i++){
            if(number%i == 0){
                return false;
            }
        }
    }
    return true;

}
int main(){
    int number;
    cin>>number;
    int primeOrNot = primeNum(number);
    if(primeOrNot){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}