#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int numb){
    if(numb<=1) return false;
    int sqrtN = sqrt(numb);
    for(int i = 2;i<=sqrtN;i++){
        if(numb%i==0) return false;
    }
    return true;
}
int main(){
    int n ;
    cout<<"enter your number upto"<<endl;
    cin>>n;
    int count = 0;
    for(int i = 2;i<n;i++){
        if(isPrime(i)){
            count++;

        }
    }
    cout<<count;
}