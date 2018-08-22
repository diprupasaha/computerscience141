//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

int inputdays;
int weeks;
int years;
int days;

//take input

cout << "Enter number of day(s): ";
cin >> inputdays;

//perform the operations

years=inputdays/365;
weeks=(inputdays%365)/7;
days=(inputdays%365)%7;

//show the output

cout << "The number of year(s)= "<<years<<endl;
cout << "The number of week(s)= "<<weeks<<endl;
cout << "The number of day(s)= "<<days<<endl; 
cout <<inputdays<<" day(s) = "<<years<<" year(s), "<<weeks<<" week(s), "<<days<<" day(s)"<<endl;
return 0;
}

