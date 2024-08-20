#include<iostream>
#include<vector>
using namespace std;
int interSect(vector<int> array,vector<int> array2){
    for(int i = 0;i<array2.size();i++){
        array.push_back(array2[i]);
    }
    for(int i =0;i<array.size();i++){
        for(int j = i+1;j<array.size();j++){
            if(array[i]==array[j]){
                array.pop_back();
            }
        }
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    };
}
int main(){
    vector<int> array{1,2,3,4,5};
    vector<int> array2{6,7,5,3,4,2};
    interSect(array,array2);
}