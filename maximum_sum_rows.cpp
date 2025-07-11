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
     int max_sum=0;
     
          for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int sum=0;
            for(int j=0;j<col;j++){
                sum+=matrix[i][j];
            }
            max_sum=max(max_sum,sum);
        }
     }

    cout<<max_sum;
     return 0;
}