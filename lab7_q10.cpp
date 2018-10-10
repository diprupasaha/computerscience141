//add the library
#include<iostream>
using namespace std;

//defining the recursive relation
int fibo(int n){
     if(n==1){
          //defining first element of Fibonacci sequence
          return 0;
          }
     else if(n==2){
          //defining second element of Fibonacci sequence
          return 1;}
     else if(n>=1){
          //recursive statement
          return fibo(n-1)+fibo(n-2);
     }}
     
//main
int main(){
     //declaring variables
     int n;
     
     //taking input
     cout<<"Enter the number: ";
     cin>>n;
     
     cout<<"The "<<n<<"th number of Fibonacci sequence is "<<fibo(n);//calling the recursive function
     return 7;
}
      