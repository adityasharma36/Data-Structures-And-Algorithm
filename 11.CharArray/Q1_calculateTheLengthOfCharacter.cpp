#include<iostream>
#include<vector>
using namespace std;
int lengthOfCharacter(char array[] ){
    int count = 0;
    int i = 0;
    while(array[i]!='\0'){
        count++;
        i++;
    }
    cout<<count<<endl;
};
int main(){
    char array[100];
    cout<<"enter your name "<<endl;
    cin.getline(array,100);
    lengthOfCharacter(array);
}
