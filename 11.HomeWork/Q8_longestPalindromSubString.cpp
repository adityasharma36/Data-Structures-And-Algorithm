// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// bool secondGroupPalindrom(string group,int i,int j){
//     while(i<=j){
//         if(group[i]!=group[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;

// };
// bool groupAnagram(string group){
//     int i = 0;
//     int j = group.size()-1;
//     while(i<=j){
//         if(group[i]!=group[j]){
//             return secondGroupPalindrom(group,i+1,j-1);
//         }else{
//             i++;
//             j--;
//         }
//     }
//     return true;
    
// };
// int main(){
//     string group = "baad";
//     cout<<groupAnagram(group);
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