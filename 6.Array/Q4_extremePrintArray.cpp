// #include<iostream>
// using namespace std;
// void extremePrint(int array[]){
//     int start = 0;
//     int end = 6;
//     while(end>=start){
//         if(array[start]== array[end]){
//             cout<<array[start]<<" ";
//         }else{
//             cout<<array[start]<<" ";
//             cout<<array[end]<<" ";
//         }
//         start++;
//         end--;
//     }
// }
// int main(){
//     int array[7] = {10,20,30,40,50,60,70};
//     cout<<"Extreme Printing of Array:"<<endl;
//     extremePrint(array);
//     return 0;

// }

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int start = 0;
    int end = 4;
    int medium = 0;
    while (end >= medium)
    {
        if (start == medium)
        {
            cout << array[medium] << " ";
        }
        else if (medium!=end)
        {
            swap(array[medium], array[end]);
            cout << array[medium]<<" ";
        }
        else{
            cout<<array[end]<<" ";
        }
        medium++;
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << array[i] << " ";
    // }
    // return 0;
}