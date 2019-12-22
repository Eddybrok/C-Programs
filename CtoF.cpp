#include<iostream>
using namespace std;
 
int main()
{
    float celcius, fehrenheit;
 
    cout << "Enter the temperature in fehrenheit :";
    cin >> fehrenheit;
    celcius =  (fehrenheit-32) / 32;
    cout << "The temperature in fehrenheit    : " << fehrenheit << endl;
    cout << "The temperature in celcius : " << celcius << endl;
    return 0;
}