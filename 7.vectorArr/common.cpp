#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// int uniqueElement(vector<int>array){
//     int zor = 0;
//     for(int i = 0;i<array.size();i++){
//         zor = zor ^ array[i];
//     }
//     cout<<zor<<" ";
// }
// int main(){
//     vector<int>array{1,1,2,3,4,4,3};
//     uniqueElement(array);
// }

// int concat(vector<int>array1,vector<int>array2,vector<int>array3){
//     for(int i = 0;i<array1.size();i++){
//         array3.push_back(array1[i]);
//     }
//     for(int i = 0;i<array2.size();i++){
//         array3.push_back(array2[i]);
//     }
//     for(int i = 0;i<array3.size();i++){
//         cout<<array3[i]<<" ";
//     }
// };
// int main(){
//     vector<int>array1{1,2,3,4,5};
//     vector<int>array2{6,7,8,9,10};
//     vector<int>array3;
//     concat(array1,array2,array3);
// }
// void insterSection(vector<int>array1,vector<int>array2){
//     for(int i = 0;i<array1.size();i++){
//         for(int j = 0;j<array2.size();j++){
//             if(array1[i] == array2[j]){
//                 cout<<array1[i]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     vector<int>array1{1,2,3,4,5};
//     vector<int>array2{6,7,2,3,5};
//     insterSection(array1,array2);
// }
// void pairSum(vector<int>array,vector<int>array2){
//     for(int i = 0;i<array.size();i++){
//         for(int j = i+1;j<array2.size();j++){
//             if(array[i]+array2[j] == 10){
//                 cout<<"value which has some "<<array[i]<<" "<<array2[j]<<endl;
//             }
//         }
//     }
// }
// int main(){
//     vector<int>array{1,2,3,4,5,6};
//     vector<int>array2{1,2,3,4,5,6};
//     pairSum(array,array2);
//     return 0;
// }
// void sortZeroAndOne(vector<int>array){
//     int start = 0;
//     int end = array.size() -1;
//     int med = 0;
//     while(end>=med){
//         if(array[med]==0){
//             swap(array[med],array[start]);
//             med++;
//             start++;
//         }
//         else if(array[med]==1){
//             swap(array[med],array[end]);
//             end--;

            
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }

// }
// int main(){
//     vector<int>array{0,1,0,1,0,1,0};
//     sortZeroAndOne(array);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int uniqueElement(vector<int> array){
//     int zor = 0;
//     for(int i = 0;i<array.size();i++){
//         zor = zor^array[i];
//     }
//     cout<<zor<<" ";
// };
// int main(){
//     vector<int> array{1,1,2,3,3};
//     uniqueElement(array);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int concat(vector<int> array,vector<int> array2){
//     for(int i = 0;i<array2.size();i++){
//         array.push_back(array2[i]);
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
// }
// int main(){
//     vector<int> array{1,2,3,4,5};
//     vector<int> array2{6,7,8,9,10};
//     concat(array,array2);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int interSect(vector<int> array,vector<int> array2){
//     for(int i = 0;i<array2.size();i++){
//         array.push_back(array2[i]);
//     }
//     for(int i =0;i<array.size();i++){
//         for(int j = i+1;j<array.size();j++){
//             if(array[i]==array[j]){
//                 array.pop_back();
//             }
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     };
// }
// int main(){
//     vector<int> array{1,2,3,4,5};
//     vector<int> array2{6,7,5,3};
//     interSect(array,array2);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int pairSum(vector<int> array){
//     for(int i = 0;i<array.size();i++){
//         for(int j = i+1;j<array.size();j++){
//             if(array[i]+array[j]==9){
//                 cout<<array[i]<<" "<<array[j]<<endl;
//             }
//         }
//     }
// }
// int main(){
//     vector<int> array{1,2,3,4,5};
//     pairSum(array);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void sortZero(vector<int> array){
//     int start = 0;
//     int end = array.size()-1;
//     int mid = 0;
//     while(mid<=end){
//         if(array[mid]==0){
//             swap(array[mid],array[start]);
//             mid++;
//             start++;
//         }else if(array[mid]==1){
//             swap(array[mid],array[end]);
//             end--;
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }

// }
// int main(){
//     vector<int> array{1,0,0,1,0,1,0,1,0};
//     sortZero(array);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void sortZero(vector<int> array){
//     int start = 0;
//     int end = array.size()-1;

//     while(start<=end){
//         if(array[start]==0){
//             start++;
//         }else if(array[start]==1){
//             swap(array[start],array[end]);
//             end--;
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }

// }
// int main(){
//     vector<int> array{1,0,0,1,1,1,1,0,1,0,1,0};
//     sortZero(array);
// }