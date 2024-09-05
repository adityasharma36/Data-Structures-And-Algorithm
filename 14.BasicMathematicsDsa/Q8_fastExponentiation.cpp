#include<iostream>
using namespace std;
int fastExponentiation(int a,int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ans*a;
        }
        a = a*a;
        b=b>>1;
    }
    return ans;
}
int main(){
    int a;
    cout<<"enter your number "<<endl;
    cin>>a;
    int b;
    cout<<"enter your power "<<endl;
    cin>>b;
    cout<<fastExponentiation(a,b);
}
