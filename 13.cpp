#include <iostream>
using namespace std;

//This program adds,subtracts or multiplies according to our input.('switch' staatement used)
//Author // Muhammad Taha

int main ()
{
char op;
float a,b;
cout <<"Enter desired operator [ + , - or *] = ";
cin>>op;
cout <<"Enter first number = a = ";
cin>>a;
cout <<"Enter second number = b = ";
cin>>b;
switch (op)
{
case '+':
cout <<a<<"+"<<b<<"="<<a+b;
break;
case '-':
cout <<a<<"-"<<b<<"="<<a-b;
break;
case '*':
cout <<a<<"*"<<b<<"="<<a*b;
break;
default:
cout <<"Sorry, please try again !";
break;
}
    return 0;
}