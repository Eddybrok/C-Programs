#include <iostream>
using namespace std;

//This program calculates the area and circumference of circle based on our input of radius.
//Author : Muhammad Taha (DSE-1)

int main ()
{
float area,cir,pi=3.14,r,a;
cout <<"Enter value of radius of circle = ";
cin>>r;
a =r * r;
area = pi * a;
cir = 2 * pi * a;
cout <<"The area of this circle is = "<<area<<endl;
cout <<"The circumference of this circle is = "<<cir<<endl;
cout <<"Thank you !"<<endl;
return 0;
}