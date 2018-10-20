//add the library
#include<iostream>
using namespace std;

int main(){
    //declaring the  variables
    int len,sum;

    //taking input of the length of the array
    cout<<"Enter the length of the array: ";
    cin>>len;

    //declaring array
    int arr[len];

    //taking input of the elements of the array
    for (int i=0;i<len;i++){
        int p;
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>p;
        arr[i]=p;}

    //calculating the sum
    for (int j=0;j<len;j++){
        sum+=arr[j];}
    
    //print the sum    
    cout<<"The sum of the elements in the array: "<<sum<<endl;
    return 7;
}
