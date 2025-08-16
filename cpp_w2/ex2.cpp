#include<iostream>
using namespace std;
double computeAverage(const int arr[], int size){
    double average=0;
    for(int i=0;i<size;i++){
        average+=arr[i];
    }
    return average/size;
}
int findMin(const int arr[], int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int findMax(const int arr[], int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max>arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<"Enter size of array : "; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter value of array["<<i+1<<"] = "; cin>>arr[i];
    }
    cout<<""<<findMax(arr,size)<<endl;
    cout<<""<<findMin(arr,size)<<endl;
    cout<<""<<computeAverage(arr,size)<<endl;


    return 0;
}