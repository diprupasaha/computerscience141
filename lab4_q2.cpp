//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float ctemp;
float ftemp;

//take input

cout << "Enter Temperature in Celsius: ";
cin >> ctemp;

//perform the operations

ftemp=(9*ctemp)/5+32;

//show the output

cout << "The Temperature in Fahrenheit = "<<ftemp<<endl;
return 0;
}

