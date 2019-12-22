#include <iostream>
using namespace std;

//This program calculates the Total,percentage adn grades of students.
//Author : Muhammad Taha
//Type : Runtime
//Coded using VS Code

int main()
{
char studentn [20];
float p,c,m,u,e,a,t,g;
cout <<"\n Enter Student name : ";
cin>>studentn;
cout <<"\n Enter Physics Marks = ";
cin>>p;
cout <<"\n Enter Chemistry Marks = ";
cin>>c;
cout <<"\n Enter m Marks = ";
cin>>m;
cout <<"\n Enter u Marks = ";
cin>>u;
cout <<"\n Enter English Marks = ";
cin>>e;
t=p + c + m + u + e;
cout <<t;

return 0;
}