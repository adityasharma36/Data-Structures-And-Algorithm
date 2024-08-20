#include<iostream>
#include<vector>
using namespace std;
int divideTwoNum(int number,int divideBy,int decimal){
    int start = 0;
    int end = number;
    int store = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid*divideBy==number){
            store = mid;
            return store;
        }else if(mid*divideBy>number){
            end = mid -1;
        }else{
            start = mid+1;
            store = mid;

        }
    }
    return store;
}
int main(){
    int number,divideBy,decimal;
    cin>>number;
    cin>>divideBy;
    cin>>decimal;
    int answer = divideTwoNum(number,divideBy,decimal);
    double add = 0.1;
    double ans = answer;
    for(int i = 0;i<decimal;i++){
        for(double j = ans;j*j<number;j+=add){
            ans = j;
        }
        add = add/10;
    }
    cout<<"the divisle is "<<ans<<endl;


}