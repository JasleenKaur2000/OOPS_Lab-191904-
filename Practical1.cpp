//Wap to read and display a mxn matrix
#include<bits/stdc++.h> 
using namespace std;

int read_matrix(int m,int n){
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
}
int display_matrix(int m,int n){
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int m,n;
    cout<<"Enter the no. of rows of matrix"<<" ";
    cin>>m;
    cout<<"Enter the no. of columns of matrix"<<" ";
    cin>>n;
    int mat[m][n];
    read_matrix(m,n);
    display_matrix(m,n);
    return 0;
}
