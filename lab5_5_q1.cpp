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
for (int i=1;i<=n;i++){
	//condition for each row
	for (int j=1;j<=n;j++){
		cout<<"*";}
	cout<<endl;}
return 0;
}
