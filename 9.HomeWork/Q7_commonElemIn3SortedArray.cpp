#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int commonElement(vector<int>array1,vector<int>array2,vector<int>array3){
    vector<int>array4;
    set<int>st;
    int i,j,k;
    i=j=k = 0;
    while(i<array1.size()&&j<array2.size()&&k<array3.size()){
        if(array1[i]==array2[j]&&array2[j]==array3[k]){
            st.insert(array1[i]);
            i++;
            j++;
            k++;
            }
            else if(array1[i]<array2[j]){
                i++;
            }
            else if(array1[i]<array3[k]){
                j++;
            }
            else{
                k++;
            }
    }
    for(auto i:st){
        array4.push_back(i);
    }
    return array4;
}
int main(){
    vector<int>array1{1,2,3,4,5};
    vector<int>array2{2,4,6,8,10};
    vector<int>array3{2,5,7,9,12};
    vector<int>array4;
    cout<<commonElement(array1,array2,array3);
}