#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int robHelper(vector<int>&nums,int i ){
    if(i>=nums.size()){
        return 0;
    }
    int robAmt1= nums[i]+robHelper(nums,i+2);
    int robAmt2 = 0+ robHelper(nums,i+1);
    return max(robAmt1,robAmt2);
}
int rob(vector<int>& nums){
    return robHelper(nums,0);
}
int main(){
    vector<int> array{2,1,1,2};
    cout<<rob(array);
}