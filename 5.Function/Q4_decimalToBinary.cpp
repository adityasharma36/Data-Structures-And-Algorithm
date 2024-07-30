#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinary(int decimal){
    int binary = 0;
    int power = 0;
    while(decimal>0){
        int bit = decimal%2;
        binary = bit*pow(10,power++) + binary;
        decimal = decimal/2;
    }
    return binary;
}
int main(){
    int decimal;
    cin>>decimal;
    int binaryNumber = decimalToBinary(decimal);
    cout<<binaryNumber<<endl;
}
