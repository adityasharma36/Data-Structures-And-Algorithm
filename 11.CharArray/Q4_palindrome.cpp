#include<iostream>
#include<vector>
using namespace std;
int lengthOfString(char array[]){
    int count = 0;
    int i = 0;
    while(array[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int palindrom(char array[]){
    int n = lengthOfString(array)-1;
    int i = 0;
    while(i<=n){
        if(array[i]!=array[n]){
            return 0;
        }else{
            i++;
            n--;
        }
}
        return 1;
}
int main(){
    char array[100];
    cout<<"enter your palindrom sentence "<<endl;
    cin.getline(array,100);
    cout<<palindrom(array);
}