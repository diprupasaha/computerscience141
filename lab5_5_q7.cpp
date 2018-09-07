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
for (int i=0;i<n;i++){
	for (int j=0;j<2*n;j++){
		if (j>=i && j<n+i){
			if (i==0 ||i==n-1){
				cout<<"*";}
			else if (i!=0 && i!=n-1 and j>=i+1 and j<=n+i-2){
				cout<<" ";}
			else {
				cout<<"*";}}
		else {
			cout<<" ";}}
	cout<<endl;}	

return 0;
}
