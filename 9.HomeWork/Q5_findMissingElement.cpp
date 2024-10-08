// visting method

// #include<iostream>
// #include<vector>
// using namespace std;
// void missingElement(vector<int> arr){
//     for(int i = 0;i<arr.size();i++){
//         int index = abs(arr[i]);
//         if(arr[index-1]>0){
//             arr[index-1]*=-1;
//         }
//     }
//     for(int i = 0;i<arr.size();i++){
//         if(arr[i]>0){
//             cout<<i+1<<" ";
//         }
//     }
// }
// int main(){
//     vector<int> array{1,3,3,3,3,5};
//     missingElement(array);
// }

// sorting + swap method

#include <iostream>
#include <vector>
using namespace std;
void missingElement(vector<int> arr)
{
    int i = 0;
    while (i < arr.size())
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }else{
            ++i;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 6};
    missingElement(arr);
    return 0;
}