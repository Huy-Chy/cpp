#include<iostream>
using namespace std;
//Iterative: 
int factorialIter(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        num*=i;
    }
    return num;
}
//Recursive: 
int factorialRec(int n){
    return n*factorialIter(n-1);
}
int main(){
    int num;
    cout<<"Enter number  = "; cin>>num;
    cout<<num<<"! Factorial = "<<factorialIter(num)<<endl;
    cout<<num<<"! Factorial = "<<factorialRec(num)<<endl;
    return 0;
}