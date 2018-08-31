//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int num;

//take input from the user
cout << "Enter number: ";
cin >> num;

//comparing the numbers and output
if ((num%5==0) && !(num%11==0)){
	cout<< "The number is divisible by 5 but not 11 "<<endl;}

else if (!(num%5==0) && !(num%11==0)){
	cout<< "The number is neither divisible by 5 nor 11 "<<endl;}

else if ((num%11==0) && !(num%5==0)){
	cout<< "The number is divisible by 11 but not 5 "<<endl;}

else {
	cout<< "The number is divisible by both 5 and 11 "<<endl;}

return 0;
}
                                                                                                                    
