#include<iostream>
#include<vector>
using namespace std;
int calLength(char array[]){
    int length = 0;
    int i = 0;
    while(array[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
void convertUpperToLowerCase(char array[]){
    int length = calLength(array)-1;
    int i = 0;
    while(length>=i){
        array[i]= array[i]-'a'+'A';
        i++;
    }
    for(int i = 0;i<=length;i++){
        cout<<array[i]<<"";
    }
};
int main(){
    char array[100];
    cout<<"enter your sentence "<<endl;
    cin.getline(array,100);
    convertUpperToLowerCase(array);
}