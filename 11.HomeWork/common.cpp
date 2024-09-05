// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// bool longestCommonPefix(vector<string> array){
//     int i =  0;
//     string ans;
//     while(true){
//         char commonChar=0;
//         for(auto str:array){
//             if(i>=str.length()){
//                 commonChar = 0;
//                 break;
//             }
//             if(commonChar==0){
//                 commonChar = str[i];
//             }else if(commonChar!=str[i]){
//                 commonChar= 0;
//                 break;
//             }
//         }if(commonChar ==0){
//             break;
//         }
//         ans.push_back(commonChar);
//         i++; 

//     }
//     for(int i = 0;i<ans.size();i++){
//         cout<<ans[i];
//     }
// }
// int main(){
//     vector<string> array = {"flower","flow","flights"};
//     longestCommonPefix(array);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// string revereVowel(string sentence){
//     string vowel = "aeiouAEIOU";
//     int i = 0;
//     int j = sentence.length()-1;
//     while(i<j){
//         if(vowel.find(sentence[j])==string::npos){
//             j--;
//         }else if(vowel.find(sentence[i])==string::npos){
//             i++;
//         }else{
//             swap(sentence[i],sentence[j]);
//             i++;
//             j--;
//         }

//     }
//     for(int i = 0;i<sentence.size();i++){
//         cout<<sentence[i];
//     }
// }
// int main(){
//     string sentence = "adetia";
//     revereVowel(sentence);
// }

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// bool ismorphicString(string sent,string sent1){
//     int hash[256]= {0};
//     bool istCharMapped[256]={0};
//     for(int i = 0;i<sent.size();i++){
//         if(hash[sent[i]]==0&&istCharMapped[sent1[i]]==0){
//             hash[sent[i]]= sent1[i];
//             istCharMapped[sent1[i]]=1;
//         }
//     }
//     for(int i = 0;i<sent.size();i++){
//         if(char(hash[sent[i]])!=sent1[i]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     string sent = "hello";
//     string sent1 = "geaau";
//     cout<<ismorphicString(sent,sent1);
// }


#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isPalindrom(string&array,int start,int end){
    while(start<end){
        if(array[start]!=array[end]){
            return false;
        }
        start++,end--;
    }
    return true;
}
string subString(string array){
    string ans = "";
    for(int i = 0;i<array.size();i++){
        for(int j = i;j<array.size();j++){
            if(isPalindrom(array,i,j)){
            string substr = array.substr(i,j-i+1);
            ans = substr.size()>ans.size() ? substr:ans;
            }
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i];
    }
}
int main(){
    string array = "hello";
    subString(array);
}