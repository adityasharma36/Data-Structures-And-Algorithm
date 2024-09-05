#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int checkArrayIsSorted(vector<int> array,int size,int start,bool& isSorted,int& limits){
    if(start>=size){
        return true;
    }
    if(array[start]>limits){
        limits = array[start];
        isSorted = true;
    }else{
        isSorted = false;
        return isSorted;
    }
    checkArrayIsSorted(array,size,start+1,isSorted,limits);
}
int main(){
    vector<int> array = {10};
    int start = 0;
    int end = array.size();
    int limits = INT_MIN;
    bool isSorted = true;
    checkArrayIsSorted(array,end,start,isSorted,limits);
    cout<<"is sorted or not " << isSorted<<endl;

}