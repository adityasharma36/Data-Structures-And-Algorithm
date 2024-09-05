#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> array,int start,int end,int key){
    if(start>end)
        return -1;
    
    int mid = start + (end-start)/2;
    if(array[mid]==key)
        return mid;
    
    if(array[mid]<key){
        return binarySearch(array,mid+1,end,key);
    }else{
        return binarySearch(array,start,mid-1,key);
    }
    
}
int main(){
    vector<int> array = {10,22,33,44,55,66,77};
    int start = 0;
    int end = array.size()-1;
    int key = 87;
    int ans = binarySearch(array,start,end,key);
    cout<<"the answer is "<<ans<<endl;
}