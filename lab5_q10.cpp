//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
char ch;

//take input from the user
cout << "Enter the character: ";
cin >> ch;

//comparison and output
if ((ch>='a' && ch<='z')||(ch>='A' && ch <='Z')){
	if (ch>='a' && ch<='z') {
		cout <<"The alphabet is lowercase"<<endl;}
	else {
		cout <<"The alphabet is uppercase"<<endl;}
}
else {
	cout<< "The character is not an alphabet "<<endl;}

return 0;
}
                                                                                                                    
