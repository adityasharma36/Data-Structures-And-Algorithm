#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int> array,int target){
    int end = array.size()-1;
    int start = 0;
    int result = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(array[mid] ==target){
            result = mid;
            start = mid+1;
        }else if(array[mid]>target){
            end = mid -1;
        }else{
            start = mid +1;
        }
    }
    return result;
}
int main(){
    vector<int> array{1,2,3,4,5,6,6,6,6,6};
    int target;
    cin>>target;
    cout<<lastOccurence(array,target)<<" ";
}