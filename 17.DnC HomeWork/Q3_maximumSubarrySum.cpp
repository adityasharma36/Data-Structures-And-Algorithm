#include<iostream>
#include<vector>
using namespace std;
void printMaximumSubarrySum(vector<int>& array){
    for(int i = 0;i<array.size();i++){
        for(int j = 0;j<array.size();j++){
            cout<<array[j]<<" ";
        }
    cout<<endl;
    }
}
int main(){
    vector<int> array = {-2,1,-3,4,-1,2,-5,4};
    printMaximumSubarrySum(array);
    return 0;
}