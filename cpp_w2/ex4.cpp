#include<iostream>
using namespace std;
int sumRow(const int m[][3], int row){
  int sum=0;
  for(int j=0;j<3;j++){
    sum+=m[row][j];
  }
  return sum;
}
int sumColumns(const int m[][3], int columns){
  int sum=0;
  for(int j=0;j<3;j++){
    sum+=m[j][columns];
  }
  return sum;
}
int main(){
  int mat[3][3] = { 
    { 1, 2, 3 }, 
    { 4, 5, 6 }, 
    { 7, 8, 9 } 
  };
  for(int i=0;i<3;i++){
    cout<<"Sum of Row "<<i+1<<" = "<<sumRow(mat,i)<<endl;
  }
  for(int i=0;i<3;i++){
    cout<<"Sum of columns"<<i+1<<" = "<<sumColumns(mat,i)<<endl;
  }
  return 0;  

}