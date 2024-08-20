#include<iostream>
#include<vector>
using namespace std;
void uniqueNumber(vector<int>array,int sizes){
    int uniqueNum = 0;
    for(int i = 0;i<array.size();i++){
        uniqueNum = uniqueNum^array[i];
    }
    cout<<uniqueNum;
}
int main(){
    int sizes;
    cin>>sizes;
    vector<int>array(sizes);
    for(int i = 0;i<array.size();i++){
        cin>>array[i];
    }
    uniqueNumber(array,sizes);
}