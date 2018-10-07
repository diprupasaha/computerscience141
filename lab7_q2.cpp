//add the library
#include <iostream>
using namespace std;

//defining thhe recursive function
void natprint(int n,int i){
	if (i<n){
		//recursive statement
		i+=1;
		cout<<i<<endl;
		natprint(n,i);
		}}
	
//main
int main(){
	//declaring variables
	int n;
	
	//taking input
	cout<<"Enter the natural number: ";
	cin>>n;
	
	//calling the recursive function
	natprint(n,0);
	return 7;
}
