#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    
    int chotiProblem = factorial(n-1);
    cout<<n<<" " <<chotiProblem<<endl;
    int badiProble = n*chotiProblem;
    
    return badiProble;
}
int main(){
    int n ;
    cout<<"enter your factorial number "<<endl;
    cin>>n;
    int answer = factorial(n);
    cout<<answer<<endl;
}