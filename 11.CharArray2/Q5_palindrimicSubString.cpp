#include<iostream>
#include<string>
using namespace std;
int allCount(string array,int i,int j ){
    int count =0;
    while(i>=0&&j<array.length()&& array[i]==array[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int palindromicSubString(string array ){
    int n = array.length();
    int count = 0;
    for(int center = 0;center<n;center++){
        int oddCount = allCount( array,center,center);
        count = count+oddCount;
        int evenCount = allCount( array,center,center+1);
        count = count + evenCount;

    }
    return count;

}
int main(){
    string array = "aaa";
    int totalPalindromSubString = palindromicSubString(array);
    cout<<totalPalindromSubString;
}