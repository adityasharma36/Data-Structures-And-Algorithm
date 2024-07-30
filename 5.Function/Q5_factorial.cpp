#include<iostream>
using namespace std;
int factorial(int number){
    int factorial = 1;
    if(number == 0){
        return 1;
    }else{
        for(int i = number;i>=1;i--){
            factorial = factorial*i;
        }
    }
    return factorial;
}
int main(){
    int number;
    cin>>number;
    cout<<factorial(number)<<" ";
}