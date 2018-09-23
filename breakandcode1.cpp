//add library
#include<iostream>
using namespace std;
//main function
int main(){
      cout<<"The various combinations of fruits that can be bought are:"<<endl;
      //maximum number of apples=100
      for (int i=0;i<=100;i+=1){
          //maximum number of mangoes=100
          for (int j=0;j<=100;j+=1){
               //maximum number of bananas=100
               for (int k=0;k<=100;k+=1){
                    //checking the total number of fruits and thier total cost
                    if (i+j+k==100 && i*1+j*3+k*0.5==100){
                         cout<<"Apples="<<i<<", "<<"Mangoes="<<j<<", "<<"Bananas="<<k<<endl;}
                    }}}
     return 7;
     }