#include <iostream>
using namespace std;

//This program swapps values between 3 and 4 variables.
//Author : Muhammad Taha.
//Type : Runtime
//Coded using VS Code.

int main ()
{
    int a,b,c,d,temp;
    cout <<"Enter value of a = ";
    cin>>a;
    cout <<"Enter vakue of b = ";
    cin>>b;
    cout <<">Initiating first phase of swapping using three variables."<<endl;
    cout <<">Before swap"<<endl;
    cout <<"Value of a = "<<a<<endl;
    cout <<"Value of b = "<<b<<endl;
    temp = a;3
    a = b;
    b = temp;
    cout <<">After swapping"<<endl;
    cout <<"Value of a = "<<a<<endl;
    cout <<"Value of b = "<<b<<endl;
    cout <<">First phase completed. Initiating second phase"<<endl;
    cout <<">Swapping values using four variabales"<<endl;
    cout <<">Allocating values"<<endl;
    c = a;
    d = b;
    cout <<"Value of c = "<<c<<endl;
    cout <<"Value of d = "<<d<<endl;
    cout <<">Swapping values"<<endl;
    temp = c;
    c = d;
    d = temp;
    cout <<"Value of c = "<<c<<endl;
    cout <<"Value of d = "<<d<<endl;
    cout <<">Second phase completed."<<endl;
    cout <<"Thank you for using The Value Swapper."<<endl;
    return 0; 
}