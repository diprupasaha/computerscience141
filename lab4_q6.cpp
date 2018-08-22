//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float base;
float height;
float area;

//take input

cout << "Enter base of triangle: ";
cin >> base;

cout << "Enter height of triangle: ";
cin >> height;

//perform the operations

area=0.5*base*height;

//show the output

cout << "The area of the triangle is "<<area<<" square units"<<endl;
return 0;
}

