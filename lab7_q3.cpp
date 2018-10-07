//add the library
#include <iostream>
using namespace std;

//defining the recursive function
//odd
void natodd(int a, int b){
	if (a%2!=0){
	    if (a<=b){
		    //recursive statement
		    cout<<a<<endl;
		    a+=2;
		    natodd(a,b);}}
    else{
        if (a+1<=b){
            //recursive statement
            cout<<a+1<<endl;
            a+=2;
            natodd(a,b);}
            }}
//even
void nateven(int a, int b){
	if (a%2==0){
	    if (a<=b){
		    //recursive statement
		    cout<<a<<endl;
		    a+=2;
		    nateven(a,b);}}
    else{
        if (a+1<=b){
            //recursive statement
            cout<<a+1<<endl;
            a+=2;
            nateven(a,b);}
            }}

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
	cout<<"The odd numbers between these numbers are:"<<endl;
	natodd(n1,n2);
	cout<<"The even numbers between these numbers are:"<<endl;
	nateven(n1,n2);
	return 7;
}
