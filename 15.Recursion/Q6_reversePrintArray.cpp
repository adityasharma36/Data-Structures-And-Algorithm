#include<iostream>
using namespace std;
void reversePrint(int array[],int size,int start){
    if(start>=size)
        return;
    reversePrint(array,size,start+1);
    cout<<array[start]<<" ";
    
};
int main(){
    int array[5]={10,20,30,40,50};
    int size = 5;
    int start = 0;
    reversePrint(array,size,start);
}