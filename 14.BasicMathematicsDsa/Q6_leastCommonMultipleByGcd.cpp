#include<iostream>
using namespace std;
int greatestCommonMultiple(int a,int b){
    if(b==0) return a;
    if(a==0) return b;
    while(a>0 && b>0){
        if(a>b){
            a= a-b;
        }else{
            b = b-a;
        }
    }
    int gcm = a==0 ? b:a;
    int lcm = a*b/gcm;
    return lcm;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<greatestCommonMultiple(a,b);
}