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
if ((int(ch)>=97 && int(ch)<=122)||(int(ch)>=65 && int(ch)<=90)){
	cout<< "The character is an alphabet "<<endl;}
	
else if (int(ch)>=48 && int(ch)<=57){
	cout<< "The character is a digit "<<endl;}

else {
	cout<< "The character is a special character "<<endl;}

return 0;
}
                                                                                                                    
