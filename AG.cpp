#include <iostream>
using namespace std;

int main() 
{
    int long Age,x,months,weeks,days,M,W,D,a,b,c;
    cout <<"Enter your age = ";
    cin>>x;
    months=M=12;
    weeks=W=52;
    days=D=365;
    a=M*x;
    b=W*x;
    c=D*x;
    cout <<"Age in Months = "<<a<<endl;
    cout <<"Age in Weeks = "<<b<<endl;
    cout <<"Age in Days = "<<c<<endl;
	return 0;
}
