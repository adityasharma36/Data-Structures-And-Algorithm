#include<iostream>
#include<vector>
using namespace std;
int FirstRepeated(vector<int>array){
    for(int i = 0;i<array.size();i++){
        bool isRepeated = false;
        for(int j = i+1;j<array.size();j++){
            if(array[i]==array[j]){
                isRepeated = true;
                return i+1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> array{1,2,2,3,3,5,6};
    cout<<FirstRepeated(array);
}