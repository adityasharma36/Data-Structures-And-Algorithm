#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int> arr2{6,7,8,9,10};
    vector<int> arr3;
    for(int i = 0;i<arr.size();i++){
        arr3.push_back(arr[i]);
    }for(int i = 0;i<arr2.size();i++){
        arr3.push_back(arr2[i]);
    }
    for(int i = 0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
}