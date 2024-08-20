#include<iostream>
#include<vector>
using namespace std;
int totalNumOfOccurence(vector<int> array,int target){
    int start = 0;
    int end = array.size()-1;
    int lastOccu= 0;
    int firstOccu = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(array[mid]==target){
            firstOccu = mid;
            end = mid-1;
        }else if(array[mid]>target){
            end = mid-1;
        }else{
            start = mid+1;
        }

    }
    while(start<=end){
        int mid = start + (end-start)/2;
        if(array[mid]==target){
            lastOccu = mid;
            start = mid+1;
        }else if(array[mid]>target){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return lastOccu -firstOccu +1;


}
int main(){
    int target;
    cin>>target;
    vector<int> array{1,2,3,4,4,4,4,4,4};
    int total =totalNumOfOccurence(array,target);
    cout<<total<<" ";
    }