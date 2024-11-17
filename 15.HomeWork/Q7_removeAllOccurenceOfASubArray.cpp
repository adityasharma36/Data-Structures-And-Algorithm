#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void removeOccurence(string& sentence,string& part){
    int found = sentence.find(part);
    if(found != string::npos){
        string left_part = sentence.substr(0,found);
        string right_part = sentence.substr(found+part.length(),sentence.size());
        sentence = left_part+ right_part;
        removeOccurence(sentence,part);
    }else{
        return;
    }

}
int main(){
    string sentence = "uxxxyyyb";
    string part = "xy";
    removeOccurence(sentence,part);
    cout<<sentence<<endl;
}