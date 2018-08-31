//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int side1, side2, side3;

//take input from the user
cout << "Enter first side: ";
cin >> side1;
cout << "Enter second side: ";
cin >> side2;
cout << "Enter third side: ";
cin >> side3;

//comparison and output
if ((side1==side2)&&(side2==side3)) {
	cout<<"The triangle is equilateral"<<endl;
}
else if ((side1==side2)||(side2==side3)) {
	cout<<"The triangle is isosceles"<<endl;
}
else {
	cout<<"The triangle is scalene"<<endl;
}
return 0;
}
