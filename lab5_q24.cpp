//add library

#include <iostream>
using namespace std;

//starting the function
int main(){

//declaring variables
int i=int('a');

//running the loop
while (i<=int('z') && i>=('a')) {
	cout<<char(i)<<endl;
	i+=1;
}
return 0;
}
