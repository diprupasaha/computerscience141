//add the library

#include<iostream>
#include<cmath>
using namespace std;


//start the main function

int main(){

//naming the variables

float side;
float area;

//take input

cout << "Enter side of equilateral triangle: ";
cin >> side;

//perform the operations

area=(pow(3,0.5)/4)*pow(side,2);

//show the output

cout<<"The area of the given equilateral triangle is: "<<area<<" square units"<<endl;
return 0;
}

