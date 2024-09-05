#include<iostream>
#include<string>
using namespace std;
void findChar(string array,int start,int size,bool& isPresent ,char arrays){
    if(start>=size){
        return;
    }
    if(array[start]==arrays){
        isPresent= true;
    }
    findChar(array,start+1,size,isPresent,arrays);

}
int main(){
    string array = "hello world";
    char arrays = 'a';
    int start = 0;
    int size = array.size();
    bool isPresent = false;
    findChar(array,start,size,isPresent,arrays);
    cout<<"is present or not "<<isPresent<<endl;

}