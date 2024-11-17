#include<iostream>
#include<vector>
using namespace std;
int quickSort(vector<int>& array){
    int count = 0;
    int start = 1;
    while(start<array.size()){
        if(array[0]>array[start]){
            count++;
        }
        start++;
    }
    swap(array[0],array[count]);
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> array = {8,1,3,4,20,50,30};
    quickSort(array);
}
