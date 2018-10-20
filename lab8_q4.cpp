//add the library
#include<iostream>
using namespace std;

//function to merge two arrays
void merge(int arr1[],int n1, int arr2[], int n2, int a[]){
    
    for (int i=0;i<(n1+n2);i++){
        if (i<n1){
            a[i]=arr1[i];
        }
        else{
            a[i]=arr2[i-n1];
        }
    }
    
    cout<<"The merged array: "<<endl;
    for (int i=0; i<(n1+n2);i++){
        cout<<a[i]<<" ";
    }
}
    
//main
int main(){
        
    //declaring variables
    int n1, n2;
    
    //for 1st array    
    //taking input of the size of the array
    cout<<"Enter the size of first array: ";
    cin>>n1;
    int arr1[n1];
    //taking input of the elements of the array
    for (int i=0;i<n1;i++){
        int p;
        cout<<"Enter the "<<i+1<<"th element of the first array: ";
        cin>>p;
        arr1[i]=p;
    }
    //printing the elements of the array
    cout<<"Array 1:"<<endl;
    for (int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    //for 2nd array
    //taking input of the sizes of the arrays
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int arr2[n2];
    //taking input of the elements of the array
    for (int i=0;i<n2;i++){
        int p;
        cout<<"Enter the "<<i+1<<"th element of the second array: ";
        cin>>p;
        arr2[i]=p;
    }
    //printing the elements of the array
    cout<<"Array 2:"<<endl;
    for (int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    //merged array
    int a[n1+n2];
    merge(arr1,n1,arr2,n2,a);
    return 7;
}