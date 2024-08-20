#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int> array(size);
    for(int i = 0;i<array.size();i++){
        cin>>array[i];
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    
}