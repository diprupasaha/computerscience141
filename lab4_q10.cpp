//add the library

#include<iostream>
#include<cmath>
using namespace std;


//start the main function

int main(){

//naming the variables

float p;
float t;
float r;
float ci;

//take input

cout << "Enter principal: ";
cin >> p;

cout << "Enter time period: ";
cin >> t;

cout << "Enter rate of interest: ";
cin >> r;

//perform the operations

ci=p*(pow((1+r/100),t));

//show the output

cout << "The compound interest = "<<ci<<endl;
return 0;
}

