// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int size,col;
//     cin>>size>>col;

//     vector<vector<int> >array(size,vector<int>(col));
//     // for(int i = 0;array.size();i++){
//     //     for(int j = 0;array[i].size();j++){
//     //         cin>>array[i][j];
//     //     }
//     // }
//     for(int i = 0;i<array.size();i++){
//         for(int j = 0;j<array[i].size();j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
    

// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int maxNum(vector<vector<int> > array){

// };
// int main(){
//     int size,col;
//     cin>>size>>col;
//     vector<vector<int> > array(size,vector<int> (col));
//     for(int i = 0;array.size();i++){
//         for(int j = 0;j<array[i].size();j++){
//             cin>>array[i][j];
//         }
//     }
//      for(int i = 0;array.size();i++){
//         for(int j = 0;j<array[i].size();j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
    
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int check(vector<vector<int> >array){}
// int main(){
//     vector<vector<int> > array;
//     vector<int> array1{1,2,3,4};
//     vector<int> array2{5,6,7,8};
//     array.push_back(array1);
//     array.push_back(array2);

//     for(int i = 0;i<array.size();i++){
//         for(int j = 0;j<array[i].size();j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int maxNum(vector<vector<int> > array){
    // int max = INT_MIN;
    // int min = INT_MAX;
    // for(int i = 0;i<array.size();i++){
    //     for(int j = 0;j<array[i].size();j++){
    //         if(array[i][j]>max){
    //             max = array[i][j];
    //         }
    //     }
    // }

    // for(int i = 0;i<array.size();i++){
    //     for(int j = 0;j<array[i].size();j++){
    //         if(array[i][j]<min){
    //             min= array[i][j];
    //         }
    //     }
    // }
    // cout<<max<<" ";
    // cout<<min<<" ";
    for(int i = 0;i<array.size();i++){
        for(int j = 0;j<array[i].size();j++){
            array[i][j] == array[j][i];
        }
    }

    for(int i = 0;i<array.size();i++){
        for(int j = 0;j<array[i].size();j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    vector<vector<int> > array;
    vector<int> array1{1,2,3,4};
    vector<int> array2{5,6,7,8};
    array.push_back(array1);
    array.push_back(array2);
    maxNum(array);
}