#include <iostream>
using namespace std;

//This program swaps values without using third variable.
//Author : Muhammad Taha
//Type : Runtime
//Coded using VS Code.

int main()
{
    int a, b;
    cout << "Enter value of a = ";
    cin>>a; 
    cout <<"Enter value of b = ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping values are"<<endl;
    cout <<"Value of a = "<< a <<endl;
    cout <<"Value of b = "<< b <<endl;
    cout <<"Thank you !"<<endl;
    return 0;
}