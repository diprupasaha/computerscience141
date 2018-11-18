#include<iostream>
using namespace std;

class Rectangle{
	public: 
	
	double length;          //length of rectangle
	double breadth;         //breadth of rectangle
	
	//member functions
	double area(){
		return length*breadth;         //calculates area of the rectangle
	}
	
	double perimeter(){
		return 2*(length + breadth);   //calculates perimeter of the rectangle
	}
};

int main(){
	//rectangle 1
	Rectangle rect1;
	cout<<"Enter the length of first rectangle : ";
	cin>>rect1.length;
	cout<<"Enter the breadth of first rectangle : ";
	cin>>rect1.breadth;
	
	//rectangle 2
	Rectangle rect2;
	cout<<"Enter the length of second rectangle : ";
	cin>>rect2.length;
	cout<<"Enter the breadth of second rectangle : ";
	cin>>rect2.breadth;
	
	//calculating its area using member functions
	double area1=rect1.area();
	double area2=rect2.area();
	
	//comparing their areas
	if (area1>area2){
		cout<<"Rectangle 1 has greater area = "<<area1<<endl;
	}
	else if (area1==area2){
		cout<<"Both the rectangles have same area = "<<area1<<endl;
	}
	else{
		cout<<"Rectangle 2 has greater area = "<<area2<<endl;
	}
	
	//calculating its perimeter using member functions
	double peri1=rect1.perimeter();
	double peri2=rect2.perimeter();
	
	//comparing their perimeters
	if (peri1>peri2){
		cout<<"Rectangle 1 has greater perimeter = "<<peri1<<endl;
	}
	else if (peri1==peri2){
		cout<<"Both the rectangles have same perimeter = "<<peri1<<endl;
	}
	else{
		cout<<"Rectangle 2 has greater perimeter = "<<peri2<<endl;
	}
	
	return 7;
}
