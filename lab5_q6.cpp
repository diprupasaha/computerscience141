//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int yr;

//take input from the user
cout << "Enter year: ";
cin >> yr;

//comparing the numbers and output
if (yr%100==0){
	if ((yr/100)%4==0) {
		cout<<"The year is a leap year"<<endl;
	}
	else {
		cout<<"The year is not a leap year"<<endl;
	}
}
else {
	if (yr%4==0) {
		cout<<"The year is a leap year"<<endl;
	}
	else {
		cout<<"The year is not a leap year"<<endl;
	}
}
return 0;
}
                                                                                                                    
