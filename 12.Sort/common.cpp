#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    int arr[] = {55,11,22,44,33};
    int j = 0;
    int smallest = INT_MAX;
    for(int i = 0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            swap(arr[j],smallest);
            j++;


        }
    }
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}