//adding the library
#include<iostream>
using namespace std;

//defining recursive function
int factorial(int n){
     if(n==0){
          //defining 0!=1
          return 1;}
     else{
          //recursive statement
          return n*factorial(n-1);
     }}

//main
int main(){
     //declaring variables
     int x;
     
     //taking input
     cout<<"Enter a number: ";
     cin>>x;
     
     cout<<"Its factorial is: "<<factorial(x);//calling the recursive function
     return 7;
     }