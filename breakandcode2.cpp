//add library
#include<iostream>
using namespace std;

//input function
int inputt(){
     int x;
     cout<<"Enter the numbers of shoes sold every week: ";
     cin>>x;
     return x;}
     
// function for 1st plan of salary
float salary1(int s){
     float sal=600.0;
     return sal;}
     
// function for 2nd plan of salary
float salary2(int s){
     float sal;
     sal=7*40.0+10*s*225/100.0;
     return sal;}
     
//function for 3rd plan of salary
float salary3(int s){
     float sal;
     sal=20.0*s+20*s*225/100.0;
     return sal;}
     
//main function
int main(){

     int inp=inputt();

     //salary under 1st scheme
     float sal1=salary1(inp);

     //salary under 2nd scheme
     float sal2=salary2(inp);

     //salary under 3rd scheme
     float sal3=salary3(inp);

     //comparing the salaries
     if (sal1>sal2){
          float sal0=sal1;
          if (sal0>sal3){
               cout<<"First option is best with "<<sal1<<" salary per week";
     }
          else{
               cout<<"Third option is best with "<<sal3<<" salary per week";
     }
}
     else {
          float sal0=sal2;
          if (sal0>sal3){
               cout<<"Second option is best with "<<sal2<<" salary per week";
     }
          else {
               cout<<"Third option is best with "<<sal3<<" salary per week";
     }
}  
return 7;
}
     