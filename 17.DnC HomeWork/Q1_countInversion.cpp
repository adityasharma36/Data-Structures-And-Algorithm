#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int countInversion(vector<int> & array){
//     int count = 0;
//     for(int i = 0; i<array.size();i++){
//         for(int j = i+1;j<array.size();j++){
//             if(array[i]>array[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     vector<int> array{8,4,2,1};
//     cout<<"Number of inversion is "<<countInversion(array)<<endl;
// }
// long merge(vector<int> & arr,vector<int> & temp,int start,int mid, int end){
//     int i = start,j = mid+1,k = start;
//     long c = 0;
//     while(i<=mid && j<=end){
//         if(arr[i]<=arr[j]){
//             temp[k++]=arr[i++];
//         }else{
//             c=+mid-i+1;
//         }
//     }
//     while (i<=mid)
//     {
//         temp[k++]=arr[i++];
//     }
//     while(j<=end){
//         temp[k++]=arr[j++];
//     }
//     while(start<=end){
//         arr[start]= temp[start];
//         ++start;
//     }
//     return c; 
// }
// long mergeSort(vector<int> & arr,vector<int> & temp,int start, int end){
//     if(start>=end) return 0;
//     int mid = start+(end-start)/2;
//     long c = 0;
//     c+= mergeSort(arr,temp,start,mid);
//     c+=mergeSort(arr,temp,mid+1,end);
//     c+=merge(arr,temp,start,mid,end);
//     return c;
// }
// long countInvertion(vector<int> arr){
//     long c = 0;
//     vector<int> temp(arr.size(),0);
//     c = mergeSort(arr,temp,0,arr.size()-1);
//     return c;
// }
// int main(){
//     vector<int> array{8,4,2,1};
//     cout<<countInvertion(array);
//     return 0;
// }