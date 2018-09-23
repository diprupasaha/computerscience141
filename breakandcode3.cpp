// add library
#include<iostream>
using namespace std;

//running an infinite loop to check for every perfect square number
int main(){

int i =0;
while (i>=0){
     int x=i*i;
     
     //running a finite loop to check if the perfect square nunber is also the sum of first n natural numbers
     int k=0;
     while(k<=x){
          if (x==(k*(k+1))/2){
          //sum of first n natural numbers=(n*(n+1))/2
               cout<<x<<endl;}
          k++;}
     i++;}
return 7;
}