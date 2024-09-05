// #include<iostream>
// #include<string> 
// #include <typeinfo>
// using namespace std;
// string reverseOnlyLetter(string sentence){
//     int length = sentence.length()-1;
//     int first = 0;
//     while(first<=length){
//         if(typeid(sentence[first]).name()!="s"){
//             first++;
//         }else{
//             swap(sentence[first],sentence[length]);
//             first++;
//             length--;
//         }
//     }
//     for(int i = 0;i<sentence.size();i++){
//         cout<<sentence[i];
//     }
// };
// int main(){
//     string sentence = "a-bc-dEf-ghIj";
    // reverseOnlyLetter(sentence);
//     cout<<typeid(sentence[1]).name();
//     cout<<typeid(sentence[0]).name();
// }



#include<iostream>
#include<string>
using namespace std;
string reverseOnlyLetter(string sentence){
    int length = sentence.length()-1;
    int first = 0;
    while(first<length){
        if(isalpha(sentence[first]) && isalpha(sentence[length])){
            swap(sentence[first],sentence[length]);
            first++;
            length--;
        }else if(!isalpha(sentence[first])){
            first++;
        }else{
            length--;
        }
    }
    for(int i = 0;i<sentence.size();i++){
        cout<<sentence[i];
    }
}
int main(){
    string sentence = "a-bc-dEf-ghIj";
    reverseOnlyLetter(sentence);
}