// #include<iostream>
// #include<vector>
// using namespace std;

// int getlength(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//     }
//     cout<<length<<endl;
// }
// int main(){
//     char array[10];
//     cin.getline(array,50);
//     getlength(array);
// char array[100];
// cin>>array;
// cout<<"my name is : "<<array<<endl;

//     char array[4];
//     for(int i = 0;i<4;i++){
//     cin>>array[i];
// }
//     cout<<"the value of index is "<< " and index value is "<< array[i]<<endl;

// char array[100];
// // cin>>array;
// cin.getline(array,100);
// cout<<array;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int getlength(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//     }
//     return length;
// }
// int main(){
//     char name[100];
//     cout<<"enter your name "<<endl;
//     cin.getline(name,100);
//     cout<<getlength(name);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int reverString(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//     }
//     for(int j = length-1;j>=0;j--){
//         cout<<array[j];
//     }
// }
// int main(){
//     char array[100];
//     cout<<"enter your name "<<endl;
//     cin.getline(array,100);
//     reverString(array);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int getlength(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//     }
//     int start = 0;
//     int end = length-1;
//     while(start<=end){
//         if(array[start]==' '){
//         array[start] = '@';
//         start++;
//         }else{
//             start++;
//         }
//     }
//     for(int i = 0;i<=end;i++){
//         cout<<array[i];
//     }
// }
// int main(){
//     char name[100];
//     cout<<"enter your name "<<endl;
//     cin.getline(name,100);
//     getlength(name);

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool palindrom(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//     }
//     int start = 0;
//     int end = length-1;
//     while(start<=end){
//         if(array[start]==array[end]){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     char name[100];
//     cout<<"enter your name "<<endl;
//     cin.getline(name,100);
//     cout<<palindrom(name);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int lowerToUpperCase(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//         }
//         int start = 0;
//         int end = length-1;
//         while(start<=end){
//             array[start] = array[start] -'a'+ 'A';
//             start++;
//         }

//     for(int i = 0;i<length;i++){
//         cout<<array[i];
//     }
// };
// int main(){
//     char name[100];
//     cout<<"enter your name "<<endl;
//     cin.getline(name,100);
//     lowerToUpperCase(name);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int upperToLowerCase(char array[]){
//     int length = 0;
//     int i = 0;
//     while(array[i]!='\0'){
//         length++;
//         i++;
//         }
//         int start = 0;
//         int end = length-1;
//         while(start<=end){
//             array[start] = array[start] -'A'+ 'a';
//             start++;
//         }

//     for(int i = 0;i<length;i++){
//         cout<<array[i];
//     }
// };
// int main(){
//     char name[100];
//     cout<<"enter your name "<<endl;
//     cin.getline(name,100);
//     upperToLowerCase(name);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter your name "<<endl;
//     getline(cin,name);
//     cout<<name;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string name;
//     cout << "enter your name " << endl;
//     getline(cin, name);
//     cout << name << endl;
//     name.push_back('a');
//     cout << name << endl;
//     name.pop_back();
//     cout<<name<<endl;
//     cout<<name.size()<<endl;
//     cout<<name<<endl;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// bool compare(string a , string b){
//     if(a.compare(b)==0){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     string name1 = "Rahul";
//     string name2 = "rahul";
//     bool isCompare = compare(name1,name2);
//     if(isCompare){
//         cout<<"both names are same"<<endl;
//     }else{
//         cout<<"both names are not same"<<endl;
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int notCommon(string sentence){
//     int i = 0;
//     string ans = "";
//     while(i<sentence.length()){
//         if(ans.length()>0){
//             if(sentence[i]!=ans[ans.length()-1]){
//                 ans.push_back(sentence[i]);
//             }else{
//                 ans.pop_back();
//             }
//         }else{
//             ans.push_back(sentence[i]);
//         }
//         i++;
//     }
//     for(int i = 0;i<ans.length();i++){
//         cout<<ans[i];
//     }
// };
// int main(){
//     string sentence = "azxxzyy";
//     notCommon(sentence);

// }

// #include<iostream>
// #include<string>
// using namespace std;
// int removeString(string common){
//     string find = "abc";
//     int length = find.length();
//     int finding = find.find(find);
//     while(finding != -1){
//         common.erase(finding,length);
//         finding = find.find(find);
//     }
//     for(int i = 0;i<common.length();i++){
//         cout<<common[i];
//     }

// };
// int main(){
//     string common = "daabcbaabcbc";
//     removeString(common);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// string removeOccurrence(string s,string part){
//     int pos = s.find(part);
//     while(pos != -1){
//         s.erase(pos,part.length());
//         pos = s.find(part);

//     }
//     for(int i = 0;i<s.length();i++){
//         cout<<s[i];
//     }
// }
// int main(){
//     string s = "daabcbaabcbc";
//     string part = "abc";
//     removeOccurrence(s,part);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// string palindromeTwo(string sentence)
// {
//     int start = 0;
//     int end = sentence.length() - 1;
//     while (start <= end)
//     {
//         if (sentence[start] == sentence[end])
//         {
//             start++;
//             end--;
//             return "possible";
//         }
//         else
//         {
//             if (sentence[start] != sentence[start + 1])
//             {
//                 return "possible";
//                 start++;
//             }
//             else
//             {
//                 return "not possible";
//             }
//         }
//     }
// }

// ;
// int main()
// {
//     string sentenece = "xyztyxb";
//     cout<<palindromeTwo(sentenece);
// }


// #include<iostream>
// #include<string>
// using namespace std;
// string palindromTwo(string sentence){
//     int start = 0;
//     int end = sentence.length()-1;
//     while(start<=end){
//         if(sentence[start]==sentence[end]){
//             start++;
//             end--;
//         }else{
//             sentence.erase(start,1);
//         }
//         return "true";
//     }
//     return "false";
// };
// int main(){
//     string sentence = "madames";
//     cout<<palindromTwo(sentence);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// bool checkPalindrom(string s,int i ,int j){
//     while(i<=j){
//         if(s[i]!=s[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// bool validPalindrom(string s){
//     int i = 0;
//     int j = s.length()-1;
//     while(i<=j){
//         if(s[i]!=s[j]){
//             return checkPalindrom(s,i+1,j) || checkPalindrom(s,i,j-1);
//         }else{
//             i++;
//             j--;
//         }

//     }
//     return true;

// }
// int main(){
//     string s = "ababab";
//     cout<<validPalindrom(s)<<endl;
//     return 0;

// }


