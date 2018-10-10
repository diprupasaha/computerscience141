//adding library
#include<iostream>
using namespace std;

//defining the recursive function
int sumdigits(int n){

     if (n==0){
          return 0;}
     else {
          //recursive statement
          return n%10+sumdigits(n/10);
     }}
  
//main
int main(){
     //declaring variables
     int x;
     
     //taking input
     cout<<"Enter a number: ";
     cin>>x;
     
     cout<<"The sum of its digits: "<<sumdigits(x);//calling the recursive function
     return 7;}