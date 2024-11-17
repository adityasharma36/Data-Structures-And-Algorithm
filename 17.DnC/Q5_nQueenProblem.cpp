#include<iostream>
#include<vector>
using namespace std;
void printSolution(vector<vector<char>> &boards,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<boards[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool isSafe(int row,int col,vector<vector<char>>&boards,int n){
    int i = row,j= col;
    while(j>=0){
        if(boards[i][j]=='Q'){
            return false;
        }
        j--;
    }
    i=row,j=col;
        while(i>=0 && j>=0){
            if(boards[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i = row,j=col;
        while(i<n && j>=0){
            if(boards[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }
        return true;
    
}
void solve(vector<vector<char>> &boards,int col,int n){
    if(col>=n){
        printSolution(boards,n);
        return;
    }
    for(int row = 0;row<n;row++){
        if(isSafe(row,col,boards,n)){
            boards[row][col] = 'Q';
            solve(boards,col+1,n);
            boards[row][col]='-';
        }
    }
}
int main(){
    int n = 9;
    vector<vector<char>> boards(n,vector<char>(n,'-'));
    int col = 0;
    solve(boards,col,n);
    return 0;
}