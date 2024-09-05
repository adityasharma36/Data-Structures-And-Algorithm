// #include <iostream>
// #include <string>
// using namespace std;
// bool vaidAnagram(string array, string array2)
// {
//     if (array.length() != array2.length())
//     {
//         return false;
//     }
//     else
//     {
//         for (int i = 0; i < array.size(); i++)
//         {
//             if (array2.find(array[i]) == string::npos)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
//     int main()
//     {
//         string array = "rat";
//         string array2 = "cat";
//         cout << vaidAnagram(array, array2);
//         return 0;
//     }

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// bool vaidAnagram(string array, string array2){
//     sort(array.begin(),array.end());
//     sort(array2.begin(),array2.end());
//     if(array.compare(array2)==0){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     string array = "anagram";
//     string array2 = "rat";
//     cout<<vaidAnagram(array,array2);
// }

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool vaidAnagram(string array, string array2){
    int freqTable[256]= {0};
    for(int i = 0;i<array.size();i++){
        freqTable[array[i]]++;
    }
    for(int i = 0;i<array2.size();i++){
        freqTable[array2[i]]--;
    }
    for(int i = 0;i<256;i++){
        if(freqTable[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string array = "anagram";
    string array2 = "gramana";
    cout<<vaidAnagram(array,array2);
}

