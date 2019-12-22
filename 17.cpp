#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout <<"Enter value of a = ";
    cin>>a;
    cout <<"Enter value of b = ";
    cin>>b;
    cout <<"Enter value of c = ";
    cin>>c;
    if (b > a && a > c || c > a && a > b)
    {
        cout <<"\n a is middle number"<<a;
    }
    else if (a > b && b > c || c > b && b > a)
    {
        cout <<"\n b is middle number"<<b;
    }
    else (a > c && c > b || b > c && c > a);
    {
        cout <<"\n c is middle number"<<c;
    }

    return 0;
}