//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int num0, num1, num2, num3;

//take input from the user
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter third number: ";
cin >> num3;

//comparing the numbers and output
cout<< "Maximum between the three numbers is: ";
if (num1>=num2){
	num0=num1;
	if (num0>=num3){
		cout<< num0<<endl;
	}
	else {
		cout<< num3<<endl;
	}
}
else {
	num0=num2;
	if (num0>=num3){
		cout<< num0<<endl;
	}
	else {
		cout<< num3<<endl;
	}
}

return 0;
}
                     
