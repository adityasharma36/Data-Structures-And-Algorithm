#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
// int findPairs(vector<int> array,int diff){
//     sort(array.begin(),array.end());
//     set<pair<int,int>> ans;
//     int i = 0,j=1;
//     while(j<array.size()){
//         int dff = array[j] - array[i];
//         if(dff == diff){
//             ans.insert({array[i],array[j]});
//             j++,i++;
//         }else if(dff>diff){
//             j++;
//         }else{
//             i++;
//         }
//         if(i==j){
//             j++;
//         }
//     }
//     return ans.size();
// }
int findPairs(vector<int> array,int diff){
    sort(array.begin(),array.end());
    set<pair<int,int>> ans;
    for(int i = 0;i<array.size();i++){
        for(int j = i+1;j<array.size();j++){
            int dff = array[j] - array[i];
            if(dff == diff){
                ans.insert({array[i],array[j]});
            }
        }
    }
    return ans.size();
}
int main(){
    vector<int> array = {1,1,3,4,5};
    int diff = 2;
    cout<<findPairs(array,diff);
}
