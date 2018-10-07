//add the library
#include <iostream>
using namespace std;

//defining the recursive function
float power(float n, int p, int i){
	if (i==p){
		return n;}
	else{
		i+=1;
		//recursive statement
		n = n*power(n,p,i);
		return n;}}

//main
int main(){
	//declaring variables
	float n;
	int p;	
	
	//taking input
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"Enter the power: ";
	cin>>p;

	//calling the recursive function
	float x = power(n,p,1);
	cout<<x<<endl;;
	return 7;
}
