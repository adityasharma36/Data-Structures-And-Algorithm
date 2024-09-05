// #include<iostream>
// #include<string>
// using namespace std;
// string reverseVowel(string sentence){
//     string vowels = "aeiouAEIOU";
//     int start = 0;
//     int mid = start +1;
//     int end = sentence.length()-1;
//     while(start<end){
//         if(vowels.find(sentence[start])==string::npos){
//             start++;
//         }else{
//             while(vowels.find(sentence[mid])!=string::npos){
//                 swap(sentence[start],sentence[mid]);
//                 mid++;
//             }
//             mid++;
//         }
//     }
//     for(int i = 0;i<sentence.size();i++){
//         cout<<sentence[i];
//     }
// };
// int main(){
//     string sentence = "Hello";
//     reverseVowel(sentence);
// }

#include<iostream>
#include<string>
using namespace std;

void reverseVowel(string& sentence){
    string vowels = "aeiouAEIOU";
    int start = 0;
    int end = sentence.length()-1;
    while(start < end){
        if(vowels.find(sentence[start])==string::npos){
            start++;
        } else if(vowels.find(sentence[end])==string::npos){
            end--;
        } else {
            swap(sentence[start], sentence[end]);
            start++;
            end--;
        }
    }
    for(int i = 0;i<sentence.size();i++){
        cout<<sentence[i];
    }
    cout << endl;
}

int main(){
    string sentence = "leetcode";
    reverseVowel(sentence);
    return 0;
}