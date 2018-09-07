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
	for (int j=0;j<2*n-i-1;j++){
		if (j>=n-i-1){
			if (i>=1 && i<=n-2){
				if (((i+j)>=n) && ((i+j)<2*n-2)){
					cout<<" ";}
				else{
					cout<<"*";}}
			else if (i==0 || i==n-1) {
				cout<<"*";}}
		else {cout<<" ";}}
	cout<<endl;}	

return 0;
}
