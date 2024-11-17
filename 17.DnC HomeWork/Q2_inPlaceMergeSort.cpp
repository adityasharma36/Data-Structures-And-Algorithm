#include<iostream>
#include<vector>
using namespace std;
void inPlaceMergeSort(vector<int> & arr1,vector<int> & arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int start1 = 0;
    int start2 = 0;
    while(start1<n1 && start2<n2){
        if(arr1[start1]< arr2[start2]){
            cout<<arr1[start1]<<" ";
            start1++;
            start2++;
        }
    }
    while(start1<n1){
        cout<<arr1[start1]<<" ";
        start1++;
    }
    while(start2<n2){
        cout<<arr2[start2]<<" ";
        start2++;
    }

}
int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6,8,10};
    inPlaceMergeSort(arr1,arr2);
}