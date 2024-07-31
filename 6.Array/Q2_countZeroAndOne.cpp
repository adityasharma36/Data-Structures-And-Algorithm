#include<iostream>
using namespace std;
void count(int array[5]){
    int countZero = 0;
    int countOne = 0;
    for(int i = 0;i<5;i++){
        if(array[i]==0){
            countZero++;
        }
        if(array[i] == 1){
            countOne++;
        }
    }
    cout<<"zero is "<<countZero<<endl;
    cout<<"one is "<<countOne<<endl;
}
int main(){
    int array[5] = {1,2,1,0,0};
    count(array);


}