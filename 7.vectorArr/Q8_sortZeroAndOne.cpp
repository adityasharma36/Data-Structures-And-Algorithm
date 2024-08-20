// method one two pointer

#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int>array){
    int start = 0;
    int end = array.size()-1;
    while(start<end){
        if(array[start] == 0){
            start++;
        }
        if(array[start] == 1){
            swap(array[start],array[end]);
            end--;
        }
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    vector<int>array = {1,0,1,0,1,0,1};
    sortZeroAndOne(array);
}




// second method three pointer

#include<iostream>
#include<vector>
using namespace std;
void sortZero(vector<int> array){
    int start = 0;
    int end = array.size()-1;
    int mid = 0;
    while(mid<=end){
        if(array[mid]==0){
            swap(array[mid],array[start]);
            mid++;
            start++;
        }else if(array[mid]==1){
            swap(array[mid],array[end]);
            end--;
        }
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }

}
int main(){
    vector<int> array{1,0,0,1,0,1,0,1,0};
    sortZero(array);
}