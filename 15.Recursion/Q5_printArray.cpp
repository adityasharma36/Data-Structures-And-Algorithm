#include<iostream>
using namespace std;
void print(int array[],int size,int start ){
    if(start>=size){
        return;
    }
    cout<<array[start]<< " ";
    print(array,size,start+1);
    }
int main(){
    int array[5] = {10,20,30,40,50};
    int size = 5;
    int start = 0;
    print(array,size,start);
}