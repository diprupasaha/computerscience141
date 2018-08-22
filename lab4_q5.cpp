//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float angle1;
float angle2;
float angle3;

//take input

cout << "Enter first angle of the triangle in degrees: ";
cin >> angle1;

cout << "Enter second angle of the triangle in degrees: ";
cin >> angle2;

//perform the operations

angle3=180-angle1-angle2;

//show the output

cout << "The third angle of the triangle is = "<<angle3<<" degrees"<<endl;
return 0;
}

