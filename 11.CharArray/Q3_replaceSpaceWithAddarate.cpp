#include<iostream>
#include<vector>
using namespace std;
int calculateLength(char array[]){
    int length = 0;
    int i = 0;
    while(array[i]!='\0'){
        length++;
        i++;
    }
    return length;
};
int repalceSpaceWithAddrate(char array[]){
    int length = calculateLength(array)-1;
    int i = 0;
    while(i<=length){
        if(array[i]==' '){
            array[i] = '@';
        }
        i++;
    }
    for(int i = 0;i<=length;i++){
        cout<<array[i]<<"";
    }
}
int main(){
    char array[100];
    cout<<"enter your character "<<endl;
    cin.getline(array,100);
    repalceSpaceWithAddrate(array);
}