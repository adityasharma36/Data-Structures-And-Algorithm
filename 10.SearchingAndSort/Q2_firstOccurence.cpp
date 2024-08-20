#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> array,int target){
    int left = 0;
    int right = array.size() -1;
    int store = -1;
    while(right>=left){
        int mid = left + (right-left)/2;
        if(array[mid] == target){
            store = mid;
            right = mid -1;
        }else if(array[mid]>target){
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }
    return store;
};
int main(){
    vector<int> array = {1,2,3,4,4,4,4,4,4,};
    int target;
    cin>>target;
    cout<<firstOccurence(array,target)<<" ";
}