

#include <iostream>
using namespace std;

int main()
    {
        float b,c,d,e,f,km;
        f=20;
        d=8.5;
        cout <<"Enter distance to travel = ";
        cin>>km;
        if (km<=5)
        {
            cout <<"Your bill is = "<<f;
        }
        else (km>5);
        b=km-5;
        c=b*d;
        e=f+c;
        {
            cout <<"Your total bill = "<<e;
        }
        return 0;
    }