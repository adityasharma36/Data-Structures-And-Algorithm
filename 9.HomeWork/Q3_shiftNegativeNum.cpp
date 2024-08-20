#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    vector<int> array{-1,2,3,-4,-6,6,8};
    int start = 0;
    int end = array.size()-1;
    while(start<end){
        if(array[start]>0){
            swap(array[start],array[end]);
            end--;
        }else{
            start++;

        }
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }

}