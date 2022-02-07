//SUDOKU SOLVER using Recursion and BackTracking
#include <bits/stdc++.h>
using namespace std;
//for checking whether queen can be placed at (i,j) pos
bool checkplaced(int mat[15][15],int i,int j,int n){
    //checking row and column
    int x,y;
    for(x=0;x<i;x++){
        if(mat[x][j]==1)return false;
    }
    //checking diagonal
    for(x=i,y=j;x>=0&&y>=0;x--,y--){
        if(mat[x][y]==1)return false;
    }
    for(x=i,y=j;x>=0&&y<n;x--,y++){
        if(mat[x][y]==1)return false;
    }
        return true;
}
int nqueens(int mat[15][15],int i,int n){
    //base case 
    static int count=0;
    if(i==n){
        count=count+1;
        // for(int i=0;i<n;i++){for(int j=0;j<n;j++){
        //     cout<<mat[i][j]<<" ";
        // }cout<<endl;}
        //cout<<count<<endl;
        return count;
    }

    //recursion
    for (int x=0;x<n;x++){
        bool check=checkplaced(mat,i,x,n);    
        if(check){
            mat[i][x]=1;
            nqueens(mat,i+1,n);
            mat[i][x]=0;
        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    int mat[15][15];
    memset(mat,0,sizeof mat);
    int res=nqueens(mat,0,n);
    cout<<res<<endl;
}
