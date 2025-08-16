#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
double adds(double a, double b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
double divide(int a,int b){
    return a/b;
}
double divided(int a,int b=1){
    return a/b;
}
int main(){
    int a,b;
    cout<<"Enter value of A : "; cin>>a;
    cout<<"Enter value of B : "; cin>>b;
    cout<<"add of a and b (a+b) = "<<add(a,b)<<endl;
     cout<<"add of a and b (a+b) = "<<adds(5.5,4.5)<<endl;
    cout<<"subtract of a and b (a-b) = "<<subtract(a,b)<<endl;
    cout<<"multiply of a and b (a*b) = "<<multiply(a,b)<<endl;
    cout<<"divide of a and b (a/b) = "<<divide(a,b)<<endl;
    cout<<"divide of a and b (a/b) = "<<divided(a)<<endl;
    return 0;
}