//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float ftemp;
float ctemp;

//take input

cout << "Enter Temperature in Fahrenheit: ";
cin >> ftemp;

//perform the operations

ctemp=5*(ftemp-32)/9;

//show the output

cout << "The Temperature in Celsius = "<<ctemp<<endl;
return 0;
}

