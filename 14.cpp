#include <iostream>
using namespace std;

//This program calculates the Total,percentage and grades of students.
//Author : Muhammad Taha
//Type : Runtime
//Coded using VS Code

int main()
{
float p, c, m, u, e, a, t,g=500,b;
cout << "\n Enter Physics Marks = ";
cin >> p;
cout << "\n Enter Chemistry Marks = ";
cin >> c;
cout << "\n Enter Maths Marks = ";
cin >> m;
cout << "\n Enter Urdu Marks = ";
cin >> u;
cout << "\n Enter English Marks = ";
cin >> e;
t=p+c+m+u+e;
a=t/g;
b=a*100;
if (t>=90)
{
    cout <<"Grade = A";
}
else if (t>=80)
{
    cout <<"Grade = B";
}
else if (t>=65)
{
    cout <<"Grade = C";
}
else if (t>=50)
{
    cout <<"Grade = D";
}
else (t<50);
{
    cout <<"Grade F";
}
cout << "\n Marks = " << t;
cout << "\n Percentage = " << b;
return 0;
}