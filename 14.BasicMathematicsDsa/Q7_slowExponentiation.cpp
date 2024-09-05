#include<iostream>
using namespace std;
int slowExponential(int numb,int pows){
    int result = 1;
    if(pows==0) return result;
    for(int i = 1;i<=pows;i++){
        result = result*numb;
    }
    return result;
}
int main(){
    int numb,pows;
    cout<<"Enter a number: "<<endl;
    cout<<"Enter a power "<<endl;
    cin>>numb>>pows;
    cout<<slowExponential(numb,pows);
}