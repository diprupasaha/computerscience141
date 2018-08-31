//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int num1, num2;

//take input from the user
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;

//comparing the numbers and output
if (num1>num2){
	cout<< "Maximum between the two numbers is: "<<num1<<endl;
}
else if (num1==num2){
	cout<< "Both numbers are equal"<<endl;
}
else {
	cout<< "Maximum between the two numbers is: "<<num2<<endl;
}

return 0;
}
                                                                                                                    
