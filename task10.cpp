#include<iostream>
using namespace std;
main()
{
    int s = 10;
    string moves[s] = {"Shimmy","Shake","Pirouette","Slide","BoxStep","Headspin","Dosado","pop","Lock","Arabesque"};
    int pin;
    cout << "Enter pin of four digit number: ";
    cin >> pin;
    int a,b,c,d;
    a = pin % 10;
    pin = pin / 10;
    b = pin % 10;
    pin = pin / 10;
    c = pin % 10;
    pin = pin / 10;
    d = pin;
    a = a + 3;
    b = b + 2;
    c = c + 1;
    d = d + 0;
    if(a > 9)
    {
        a = 0;
    }
    else if(b > 9)
    {
        b = 0;
    }
    else if(c > 9)
    {
        c = 0;
    }
    else if(d > 9)
    {
        d = 0;
    }
    cout << moves[d] << "," << moves[c] << "," << moves[b] << "," << moves[a];
    
}