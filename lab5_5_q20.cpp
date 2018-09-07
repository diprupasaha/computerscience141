//including library
#include<iostream>
using namespace std;

//starting the main function
int main(){

//declaring the function                                       
int n;

//taking input from user
cout << "Enter the number: ";
cin >> n;

//running the nested loop

//number of rows
for (int i=1;i<n+1;i++){
	for (int j=1;j<i+1;j++){
		cout<<"*";}
	cout<<endl;}
for (int a=1;a<n;a++){
	for (int b=a+1;b<n+1;b++){
		cout<<"*";}
	cout<<endl;}	
return 0;
}
