#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;
int main()
{
double x,y,v,num;
int num1;
const double z=2.5;

cout <<"Input the value of x: ";
cin>> x;
cout << "Input the value of y: ";
cin>>y;

switch(x<3)
{
case 1: 
if(y>1&&y<5){
v=x*y*z;
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);
}else if (y>=5){
v=x+(y/z);
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);}
else{
v=x+y+z;
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);
}
break;
case 2:
if(y<=5){
num=(x-y)/z;
v=abs(num1);
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);
}else if (y>5){
num=sqrt(x+z);
v=x-num;
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);}
else{
v=x+y+z;
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);
}
break;
default:
v=x+y+z;
cout << "V is equal to:"<<setw(10)<<v<<setprecision(2);
}
getch();
return 0;
}

