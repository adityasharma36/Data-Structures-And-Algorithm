#include<iostream>
#include<vector>
using namespace std;
vector<bool> Seive(int n){
    vector<bool> seive(n+1,true);
    seive[0]=seive[1]=false;
    for(int i = 2;i<=n;i++){
        if(seive[i]){
            int j = i*2;
            while(j<=n){
                seive[j]=false;
                j+=i;
            }
        }
    }
    return seive;
}
int main(){
    vector<bool> seive = Seive(25);
    for(int i = 0;i<=25;i++){
        if(seive[i]){
            cout<<i<<" ";
        }
    }
}