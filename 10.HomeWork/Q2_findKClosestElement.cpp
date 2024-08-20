// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int findKclosestElement(vector<int> array,int element , int numb){
//     int size = array.size();
//     int number = numb;
//     vector<int> array2;
//     int start = 0,end = size;
//     while(start<end){
//         array2.push_back(abs(array[start]-element));
//         start++;
//     }
//     sort(array2.begin(),array2.end());
//     for(int i = 0;i<numb;i++){
//         cout<<array2[i]+element<<" ";
//     }
// }
// int main(){
//     vector<int> array = {12,16,22,30,33,35,39,42,45,48,50,53,55,56};
//     int element = 33;
//     int numb = 3;
//     findKclosestElement(array,element,numb);
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kClosestElement(vector<int> array, int x,int y){
    int start = 0,last = array.size()-1;
    while(last-start>=y){
        if(x-array[start]>array[last]-x){
            start++;
        }else{
            last--;
        }
    }
    vector<int> array2;
    for(int i = start;i<=last;i++){
        array2.push_back(array[i]);
        };
    for(int i = 0;i<array2.size();i++){
        cout<<array2[i]<<" ";
    }
};

int main(){
    int x,y;
    cin>>x>>y;
    vector<int> array{12,16,22,30,35,39,42,45,48,50,53,55,56};
    kClosestElement(array,x,y);
}