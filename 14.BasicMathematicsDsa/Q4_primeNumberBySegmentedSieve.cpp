#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int numb){
    vector<bool> array(numb,true);
    for(int i = 2;i*i<numb;i++){
        if(array[i]){
            for(int j = i*i;j<numb;j+=i){
                array[j]=false;
            }
        }
    }
    for(int i =2;i<numb;i++){
        if(array[i]){
            cout<<i<<" ";
        }
    }
}
int main(){

    isPrime(5);
}