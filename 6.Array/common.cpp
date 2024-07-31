// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int array[5];
//     for(int i = 0;i<5;i++){
//         cin>>array[i];
//     }
//     for(int i = 0;i<5;i++){
//         cout<<array[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int array[] = {1,1,1,1,0,0,0,2,3,5};
//     int zeroCount=0;
//     int oneCount=0;
//     for(int i = 0;i<10;i++){
//         if(array[i]==1){
//             oneCount++;
//         }
//         if(array[i]==0){
//             zeroCount++;
//         }
//     }
//     cout<<"the zero is "<<zeroCount<<endl;
//     cout<<"the one is "<<oneCount<<endl;
// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int array[5] = {10,20,30,40,50};
//     int max = INT_MIN;
//     int min = INT_MAX;
//     for(int i = 0;i<5;i++){
//         if(array[i]>max){
//             max = array[i];
//         }
//     }
//     for(int i = 0;i<5;i++){
//         if(array[i]<min){
//             min = array[i];
//         }
//     };
//     cout<<"max is "<<max<<endl;
//     cout<<"min is "<<min<<endl;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int array[] = {10,20,30,40,50,60};
//     int start = 0;
//     int end = 5;
//     while(start<=end){
//         if(array[start] == array[end]){
//             cout<<array[start]<<" ";
//         }
//         else{
//             cout<<array[start]<<" ";
//             cout<<array[end]<<" ";
//         }
//             start++;
//             end--;
//     }
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int array[] = {10,20,40,50,60};
    int start = 0;
    int end = 4;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    for(int i = 0;i<5;i++){
        cout<<array[i]<<" ";
        }
}