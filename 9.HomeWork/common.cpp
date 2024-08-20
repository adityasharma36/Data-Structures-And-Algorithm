// #include<iostream>
// #include<vector>
// using namespace std;
// int sortThreeNumb(vector<int> array){
//     int start = 0;
//     int end = array.size() -1;
//     int mid = 0;
//     while(mid<=end){
//         if(array[mid]==0){
//             swap(array[mid],array[start]);
//             mid++;
//             start++;
//         }
//         else if(array[mid]==1){
//             mid++;
//         }else{
//             swap(array[mid],array[end]);
//             end--;
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }

// }
// int main(){
//     vector<int> array = {0,1,0,1,0,2,1,0};
//     sortThreeNumb(array);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int shiftNegative(vector<int> array){
//     int start = 0;
//     int negativeNum = 0;
//     int positiveNum = 0;
//     int end = array.size() -1;
//     while(start<=end){
//         if(array[start]<0){
//             negativeNum++;
//             start++;
//         }else{
//             swap(array[start],array[end]);
//             positiveNum++;
//             end--;

//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
//     cout<<negativeNum<<endl;
//     cout<<positiveNum<<endl;

// };
// int main(){
//     vector<int> array = {-1,-2,-3,2,3,4,-4,5,6};
//     shiftNegative(array);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int findDuplicate(vector<int> array){
//     for(int i = 0;i<array.size();i++){
//         while(array[i]!=array[array[i]]){
//             swap(array[i],array[array[i]]);
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         if(array[i]!=i){
//             cout<<array[i]<<endl;
//             cout<<i<<endl;

//         }
//     }
// }
// int main(){
//     vector<int> array = {1,2,3,4,5,6,7,4};
//     findDuplicate(array);
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int  missingElement(vector<int> arr)
// {
//     int i = 0;
//     while (i < arr.size())
//     {
//         int index = arr[i] - 1;
//         if (arr[i] != arr[index])
//         {
//             swap(arr[i], arr[index]);
//         }else{
//             ++i;
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i]!=i+1){
//             cout<<i+1<<" ";
//         }
//     }
// }

// int main()
// {
//     vector<int> arr{1, 2, 3, 4, 5, 6, 6};
//     missingElement(arr);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int findDuplicate(vector<int> array){
//     int n = array.size();
//     for(int i = 0;i<n;i++){
//         int index = array[i] -1;
//         if(array[i]!= array[index]){
//             swap(array[i],array[index]);
//     }else{
//         ++i;
//     }
// }
// for(int i = 0;i<n;i++){
//     if(array[i]!=i+1){
//         cout<<i+1<<" ";
//     }
// }
// }
// int main(){
//     vector<int> array = {1,7,7,7,7,7,7,7};
//     findDuplicate(array);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int findFirstRepeated(vector<int> array){
//     int start = 0;
//     int end = array.size()-1;
//     int mid = 1;
//     while(mid<=end){
//         if(array[mid]==array[start]){
//             return array[mid];
//         }else if(array[mid]>array[start]){
//             mid++;
//             start++;
//         }else{
//             mid++;
//             start++;
//         }
//     }
//     return -1;
// };
// int main(){
//     vector<int> array{1,2,3,4,5,6,7};
//     cout<<findFirstRepeated(array);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int sortArray(vector<int> array){
//     int start = 0;
//     int end = array.size()-1;
//     int mid = 0;
//     while (mid<=end)
//     {
//         if(array[mid]==0){
//             swap(array[mid],array[start]);
//             start++;
//             mid++;
//         }
//         else if(array[mid]==1){
//             mid++;
//         }else{
//             swap(array[mid],array[end]);
//             end--;

//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
// }
// int main(){
//     vector<int> array{0,1,2,2,2,2,1,1,1,0,0,0,2};
//     sortArray(array);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int sortFourElement(vector<int> array){
//     int zero = 0;
//     int one = 0;
//     int two = 0;
//     while(three<=array.size()-1){
//         if(array[two]==0){
//             swap(array[one],array[zero]);
//             zero++;
//             one++;
//             two++;
//         }else if(array[two]==1){
//             swap(array[two],array[one]);
//             one++;
//             two++;
//         }else if(array[two]==2){
//             swap
//         }
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int shiftNegative(vector<int> array){
//     int start = 0;
//     int end = array.size()-1;
//     while(start<=end){
//         if(array[start]<0){
//             start++;
//         }else{
//             swap(array[start],array[end]);
//             end--;

//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
// }
// int main(){
//     vector<int> array{-1,0,0,1,-1,2};
//     shiftNegative(array);
// }

// #include<iostream>
// #include<algorithm>
// #include<limits.h>
// #include<vector>
// using namespace std;
// bool findDuplicate(vector<int> array){
//     sort(array.begin(),array.end());
//     int start = 0;
//     int duplicate = INT_MIN;
//     int end = array.size()-1;
//     while(start<=end){
//         if(array[start]==array[start+1]){
//             duplicate = array[start];
//             return duplicate;
            
//         }else{
//             start++;
//         }
//     }
//     return false;
// }
// int main(){
//     vector<int> array{1,2,2,4,6,3,5};
//     cout<<findDuplicate(array);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int findDuplicate(vector<int> array){
//     int ans = -1;
//     for(int i = 0;i<array.size();i++){
//         int index = abs(array[i]);
//         if(array[index-1]>0){
//             array[index-1]*=-1;
//         }
//     }
//     for(int i = 0;i<array.size();i++){
//         if(array[i]>0){
//             cout<<i+1<<" ";
//         }
//     }
// }
// int main(){
//     vector<int> array{1,2,3,3,3,3,3};
//     findDuplicate(array);
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int duplicateElement(vector<int> array){
//     sort(array.begin(),array.end());
//     for(int i = 0;i<array.size();i++){
//         if(i+1!=array[i]){
//             cout<<i+1<<" ";
//         }
//     }
// }
// int main(){
//     vector<int> array{1,2,3,3,3,3,3};
//     duplicateElement(array);
// }
#include<iostream>
#include<vector>
using namespace std;
int repeatedElement(vector<int> array){
    int start = 0;
    int secStart = 1;
    while(start<=array.size()-1){
        if(array[start]!=array[secStart]){
            secStart++;

        }else{
            return array[start];
        }
        start++;
    }
    return -1;
}
int main(){
    vector<int> array{1,5,3,4,3,5,6};
    cout<<repeatedElement(array);
}
