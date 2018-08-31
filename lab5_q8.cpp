//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
char ch;

//take input from the user
cout << "Enter the alphabet: ";
cin >> ch;

//comparison and output
if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')) {
	cout<< "The alphabet is a vowel "<<endl;
}
else {
	cout<< "The alphabet is a consonant "<<endl;
}

return 0;
}
                                                                                                                    
