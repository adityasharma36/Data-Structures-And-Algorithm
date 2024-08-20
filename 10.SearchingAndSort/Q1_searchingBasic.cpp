// #include<iostream>
// #include<vector>
// using namespace std;
// int  searchingBasic(vector<int> array,int target){
//     int start = 0;
//     int end = array.size() -1;
//     while(end>=start){
//         int mid = start +(end-start)/2;
//         if(array[mid] == target){
//             return mid;
//         }else if(array[mid]>target){
//             end = mid -1;
//         }else{
//             start = mid + 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int target;
//     cin>>target;
//     vector<int> array{1,2,3,4,5,6};
//     int present = searchingBasic(array,target);
//     if(present == -1){
//         cout<<" not present "<<endl;
//     }else{
//         cout<<" present"<<endl;
//     }

// }