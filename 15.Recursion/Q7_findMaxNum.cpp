#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void findMax(vector<int> array,int size,int start,int& maxi){
    if(start>=size)
        return ;
    if(maxi<array[start]){
        maxi = array[start];
    }
    findMax(array,size,start+1,maxi);


    }
int main(){
    vector<int> array = {10,20,30,40,50};
    int start = 0;
    int size = array.size();
    int maxi = INT_MIN;
    findMax(array,size,start,maxi);
    cout<<"the max is "<<maxi<<endl;
}