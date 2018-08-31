//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int n, i=0;

//take input from the user
cout << "Enter number n: ";
cin >> n;

//running the loop
while (i<=n-1) {
	cout<<n-i<<endl;
	i+=1;
}
return 0;
}
