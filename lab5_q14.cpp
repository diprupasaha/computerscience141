//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int angle1, angle2, angle3;

//take input from the user
cout << "Enter first angle in degrees: ";
cin >> angle1;
cout << "Enter second angle in degrees: ";
cin >> angle2;
cout << "Enter third angle in degrees: ";
cin >> angle3;

//comparing the numbers and output
if (angle1+angle2+angle3==180) {
	cout <<"The angles can form a triangle"<<endl;
}
else {
	cout <<"The angles cannot form a triangle"<<endl;
}
return 0;
}
                     
