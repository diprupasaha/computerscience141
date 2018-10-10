//add the library
#include <iostream>
using namespace std;

//defining the recursive function

//function to add the odd numbers
int sumodd(int a, int b){
	int sum=a;
	if (a%2!=0){
		if (a<=b){
			//recursive statement
			sum=a+sumodd(a+2,b);
			return sum;}
		else{
		    return 0;}}
	else{
		if (a+1<=b){
			//recursive statement
			sum=a+1+sumodd(a+1+2,b);
			return sum;}
		else {
		    return 0;}}}

//function print the even numbers
int sumeven(int a, int b){
	int sum;
	if (a%2==0){
		if (a<=b){
			//recursive statement
			sum=a+sumeven(a+2,b);
			return sum;}
		else {
		    return 0;}}
	else{
		if (a+1<=b){
			//recursive statement
			sum=a+1+sumeven(a+1+2,b);
			return sum;}
		else {
		    return 0;}}}



//main
int main(){
	//declaring variables
	int n1,n2;
	
	//taking input
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;

	//calling the recursive function
	cout<<"The sum of odd numbers between these two numbers: "<<sumodd(n1,n2)<<endl;;
	cout<<"The sum of even numbers between these two numbers: "<<sumeven(n1,n2)<<endl;
	return 7;
}
