#include<iostream>
#include<limits.h>
using namespace std;
int maximumNum(int array[]){
    int maximumNums = INT16_MIN;
    for(int i = 0;i<5;i++){
        if(maximumNums<array[i]){
            maximumNums = array[i];
        }
    }
    return maximumNums;
}
int main(){
    int array[5] = {1,2,3,4,5};
    cout<<maximumNum(array)<<endl;
}

