#include <iostream>
using namespace std;

int main()
{
    float a,b,hours, min, sec;
    cout <<"Enter hours = ";
    cin >>hours;
    min=60;
    sec=3600;
    a = hours*min;
    b = hours*sec;
    cout <<"Total minutes = "<<a<<endl;
    cout <<"Total seconds = "<<b<<endl;
    cout <<"Thank You !"<<endl;
    return 0;
}