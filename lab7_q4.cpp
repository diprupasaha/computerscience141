//add the library
#include <iostream>
using namespace std;

//defining thhe recursive function
int natsum(int n,int i){
	if (i<=n){
		//recursive statement
		n = n+natsum(n-1,i);
		i+=1;
		return n;}
	else{
		return n;}}


//main
int main(){
	//declaring variables
	int n;
	
	//taking input
	cout<<"Enter the natural number: ";
	cin>>n;
	
	//calling the recursive function
	int x = natsum(n,1);
	cout<<x<<endl;;
	return 7;
}
