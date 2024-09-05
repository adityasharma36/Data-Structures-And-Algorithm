#include<iostream>
using namespace std;
void reverseCountingWithRecursion(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    reverseCountingWithRecursion(n-1);
}
int main(){
    int n;
    cout<<"enter your number "<<endl;
    cin>>n;
    reverseCountingWithRecursion(n);
}