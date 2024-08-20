#include<iostream>
#include<vector>
using namespace std;
void pairSum(vector<int>array,vector<int>array2){
    for(int i = 0;i<array.size();i++){
        for(int j = i+1;j<array2.size();j++){
            if(array[i]+ array2[j] == 100){
                cout<<"the pair is "<< array[i]<<" and "<<array2[j]<<endl;
            }
        }
    }
}
int main(){
    vector<int>array = {10,20,30,40,50,60};
    vector<int>array2 = {90,20,30,40,50,60};
    pairSum(array,array2);
}