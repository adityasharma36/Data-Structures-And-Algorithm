#include<iostream>
using namespace std;
int main(){
    int array[9] = {10,20,30,40,50,70,80,90,100};
    int start = 0;
    int end = 8;
    while(end>start){
        swap(array[start],array[end]);
        end--;
        start++;
    }
    for(int i = 0;i<9;i++){
        cout<<array[i]<<" ";
    }
}
