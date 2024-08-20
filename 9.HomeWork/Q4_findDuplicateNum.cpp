// method 1 sort

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> array{1,2,3,4,4};
//     sort(array.begin(),array.end()); 

//     for(int i = 0;i<array.size();i++){
//         if(array[i] == array[i+1]){
//             cout<<array[i]<<" ";
//         }
//     }
// }

// method 2


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> array{1,2,3,4,4};
    for(int i = 0;i<array.size();i++){
        while(array[i]!=array[array[i]]){
            swap(array[i],array[array[i]]);
        }
        
    }
    for(int num:array){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
