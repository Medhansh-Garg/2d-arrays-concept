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
     int sum=0;
          for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
              sum+=matrix[i][j];
        }
     }

    cout<<sum;
     return 0;
}