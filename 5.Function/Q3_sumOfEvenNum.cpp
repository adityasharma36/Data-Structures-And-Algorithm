#include<iostream>
using namespace std;
int sumOfEvenNum(int number){
    int sum = 0;
    for(int i = 0;i<number;i++){
        if(i%2==0){
            sum = sum + i;
        }

    }
    return sum;
}
int main(){
    int number;
    cin>>number;
    int sum = sumOfEvenNum(number);
    cout<<"the total sum of even number upto "<<number<<" is "<<sum<<endl;

}