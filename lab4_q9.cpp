//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float p;
float t;
float r;
float si;

//take input

cout << "Enter principal: ";
cin >> p;

cout << "Enter time period: ";
cin >> t;

cout << "Enter rate of interest: ";
cin >> r;

//perform the operations

si=p*t*r/100;

//show the output

cout << "The simple interest = "<<si<<endl;
return 0;
}

