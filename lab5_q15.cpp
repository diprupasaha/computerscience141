//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int side, side0, side1, side2, side3, sum;

//take input from the user
cout << "Enter first side: ";
cin >> side1;
cout << "Enter second side: ";
cin >> side2;
cout << "Enter third side: ";
cin >> side3;

//comparing the numbers and output
cout<< "Maximum between the three numbers is: ";
if (side1>=side2){
	side0=side1;
	if (side0>=side3){
		side=side0;
	}
	else {
		side=side3;
	}
}
else {
	side0=side2;
	if (side0>=side3){
		side=side0;
	}
	else {
		side=side3;
	}
}
if (side1+side2+side3-side>side){
	cout<<"The sides will form a triangle"<<endl;
}
else {
	cout<<"The sides cannot form a triangle"<<endl;
}
return 0;
}
                     
