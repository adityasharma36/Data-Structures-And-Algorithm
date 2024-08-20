#include<iostream>
#include<vector>
using namespace std;
int squareRoot(int target){
    int left = 0;
    int right = target;
    int store = 0;
    while(left<=right){
        int mid = left + (right - left)/2;
        if(mid*mid==target){
            return mid;
        }else if(mid*mid>target){
            right = mid-1;
        }else{
            left = mid+1;
            store = mid;
        }
    }
    return store;
};
int main(){
    int target;
    cout<<"enter the number "<<endl;
    cin>>target;
    int Root = squareRoot(target);
    cout<<"square root of "<<target<<" is "<<Root<<endl;
    int decimalDigit;
    cout<<"enter your decimal digit"<<endl;
    cin>>decimalDigit;
    double step = 0.1;
    double ans = Root;
    for(int i = 0;i<decimalDigit;i++){
        for(double j = ans;j*j<=target;j+=step){
            ans = j;
        }
        step = step/10;
    }
    cout<<"square root of "<<target<<" is "<<ans<<endl;
    return 0;
}