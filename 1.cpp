#include <iostream>
using namespace std;

//This program is used to calculate the volume of rectangle in realtime.
//Program Author : Muhammad Taha (DSE-1)

int main ()
{
float length,width,height,volume;
cout <<"Enter length = ";
cin>>length;
cout <<"Enter width = ";
cin>>width;
cout <<"Enter height = ";
cin>>height;
volume = length*width*height;
cout <<"The volume of rectangle is = " <<volume <<endl;
cout <<"Thank you !" <<endl;
    return 0;
}