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
for (int x=0;x<n;x++){
	cout<<"*";}
cout<<endl;	
for (int y=0;y<n-2;y++){
	//condition for hollow part
	int i=0;
	while(i<n){
		i+=1;
		if (i==1 || i==n){
			cout<<"*";
		}
		else {
			cout<<" ";}}
	cout<<endl;}
for (int x=0;x<n;x++){
	cout<<"*";}

return 0;
}
