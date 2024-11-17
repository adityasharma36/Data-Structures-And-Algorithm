#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void maxProfitFinder(vector<int>& array,int i ,int& minProfit,int&maxProfit){
    if(i==array.size()){
        return;
    }
    if(array[i]<minProfit){
        minProfit = array[i];
    }
    int todayProfit = array[i]-minProfit;
    if(todayProfit>maxProfit){
        maxProfit = todayProfit;

    }
    maxProfitFinder(array,i+1,minProfit,maxProfit);
}
int maxProfit(vector<int>& array){
    int minProfit = INT_MAX;
    int maxProfit = INT_MIN;
    maxProfitFinder(array,0,minProfit,maxProfit);
    return maxProfit;
}
int main(){
    vector<int> array{7,1,5,3,6,4};
    cout<<maxProfit(array);
}