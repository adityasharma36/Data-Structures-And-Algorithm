#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,0,0,2,1};
    int start = 0;
    int medium = 0;
    int end = arr.size() -1;
    while(medium<end){
        if(arr[medium]== 0){
            swap(arr[start],arr[medium]);
            start++;
            medium++;
        }
        else if(arr[medium]==1){
            medium++;
        }else{
            swap(arr[medium],arr[end]);
            end--;
        }
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        }
}