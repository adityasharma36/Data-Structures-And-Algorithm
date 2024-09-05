#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void findMinNum(vector<int> array,int size,int start,int& mini){
    if(start>=size){
        return;
    }
    if(array[start]<mini){
        mini = array[start];
    }
    findMinNum(array,size,start+1,mini);
}
int main(){
    vector<int> array = {10,30,21,44,32,17,19,66};
    int size = array.size();
    int start = 0;
    int mini = INT_MAX;
    findMinNum(array,size,start,mini);
    cout<<"the minimum in array is "<< mini<<endl;

}