//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float cm;
float m;
float km;

//take input

cout << "Enter Length in centimetre: ";
cin >> cm;

//perform the operations

km=cm/100000;
m=cm/100;

//show the output

cout << "The Length in metre = "<<m<<endl;
cout << "The Length in kilometre = "<<km<<endl;
return 0;
}

