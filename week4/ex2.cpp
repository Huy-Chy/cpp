#include<iostream>
using namespace std;
int main(){
    int x=42;
    int *p=&x;

    cout<<"value x : "<<x<<endl;
    cout<<"address x : "<<&x<<endl;
    cout<<"Value p : "<<p<<endl;
    cout<<"value *p : "<<*p<<endl;

    cout<<"After change"<<endl;
    *p=100;
    cout<<"value x : "<<x<<endl;
    cout<<"address x : "<<&x<<endl;
    cout<<"Value p : "<<p<<endl;
    cout<<"value *p : "<<*p<<endl;
    return 0;
}