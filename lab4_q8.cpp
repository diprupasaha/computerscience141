//add the library

#include<iostream>
using namespace std;


//start the main function

int main(){

//naming the variables

float marks1;
float marks2;
float marks3;
float marks4;
float marks5;
float total;
float avg;
float percent;

//take input

cout << "Enter marks in first subject out of 100: ";
cin >> marks1;

cout << "Enter marks in second subject out of 100: ";
cin >> marks2;

cout << "Enter marks in third subject out of 100: ";
cin >> marks3;

cout << "Enter marks in fourth subject out of 100: ";
cin >> marks4;

cout << "Enter marks in fifth subject out of 100: ";
cin >> marks5;

//perform the operations

total=marks1+marks2+marks3+marks4+marks5;
avg=total/5;
percent=total/5;

//show the output

cout << "The total marks obtained = "<<total<<endl;
cout << "The average marks obtained = "<<avg<<endl;
cout << "Percentage = "<<percent<<"%"<<endl; 
return 0;
}

