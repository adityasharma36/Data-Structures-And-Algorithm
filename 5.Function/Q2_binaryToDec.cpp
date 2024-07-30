#include<iostream>
#include<cmath>
using namespace std;
int binaryNum(int binary){
    int decimal = 0;
    int power = 0;
    while(binary){
        int digit = binary%10;
        decimal = decimal + digit*pow(2,power++);
        binary = binary/10;
    }
    return decimal;
}
int main(){
    int binary ;
    cin>>binary;
    int decimalNum = binaryNum(binary);
    cout<<"decimal value of "<< binary<<" "<<decimalNum<<endl;
}