#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int bs(vector<int>& array, int start, int end, int number){
    while(start <= end){
        int mid = start + (end-start)/2;
        if(mid < array.size() && array[mid] == number){
            return mid;
        }
        else if(mid < array.size() && array[mid] > number){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int expSearch(vector<int>& array, int number){
    if(array[0] == number){
        return 0;
    }
    int i = 1;
    while(i < array.size() && array[i] <= number){
        i = i * 2;
    }
    return bs(array, i/2, min(i, (int)array.size()-1), number);
}

int main(){
    vector<int> array{3,4,5,6,11,13,14,15,56,70};
    int number;
    cout << "Enter your target: ";
    cin >> number;
    int ans = expSearch(array, number);
    cout << ans << endl;
    return 0;
}