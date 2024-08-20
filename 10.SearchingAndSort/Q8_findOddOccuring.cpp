#include<iostream>
#include<vector>
using namespace std;
int findOddOccuring(vector<int> array){
    int start = 0;
    int end = array.size() -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid%2==0){
            if(array[mid]==array[mid+1]){
                start = mid + 2;
            }else{
                end = mid;
            }
        }else{
            if(array[mid]==array[mid-1]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
};
int main(){
    vector<int> array{1,1,2,2,3,3,4,4,3,600,600,4,4};
    // int target;
    // cin>>target;
    findOddOccuring(array);
}