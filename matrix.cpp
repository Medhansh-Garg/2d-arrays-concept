#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter length row:";
    cin>>row;
    cout<<endl;
    int col;
    cout<<"Enter length col:";
    cin>>col;
    int matrix[row][col];
     cout<<"enter  elements of matrix:";
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
              cin>>matrix[i][j];
        }
     }
          for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
              cout<<matrix[i][j]<<" ";
        }
        cout << endl;
     }

   
     return 0;
}