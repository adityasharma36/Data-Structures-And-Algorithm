// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// string longestCommonPrefix(vector<string> array){
//     string common = "";
//     int i = 0;
//     while(i<array[i].size()){
//         string s = array[i];
//         for(int j = 0;j<array[i].size();j++){
//                 }
//     }
// };
// int main(){
//     vector<string> array = {"flower","flow","flights"};
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string> array)
{
    string common = "";
    int start = 0;
    int i = 0;
    int end = array.size() - 1;
    while (start <= end)
    {
        if (array[start][i] == array[start + 1][i])
        {
            common.push_back(array[start][i]);
            i++;
        }
        else
        {
            break;
        }
        start++;
    }
    if (common.size() > 0)
    {
        for (int i = 0; i < common.size(); i++)
        {
            cout << common[i];
        }
    }
    else
    {
        cout << "";
    }
}
int main()
{
    vector<string> array = {"wer", "flowr", "flight"};
    longestCommonPrefix(array);
}