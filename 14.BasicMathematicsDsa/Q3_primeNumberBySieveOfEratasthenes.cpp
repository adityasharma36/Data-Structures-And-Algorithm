#include<iostream>
#include<vector>
using namespace std;
int isPrime(int a){
    if(a==1) return false;
    vector<int> prime(a,true);
    prime[0]=prime[1]==false;
    int ans = 0;
    for(int i = 2;i<a;i++){
        if(prime[i]){
            ans++;
            int j = 2*i;
            while(j<a){
                prime[j]=false;
                j+=i;
            }
        }
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    cout<<isPrime(n);
}