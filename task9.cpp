#include<iostream>
using namespace std;
main()
{
    int s = 10;
    string moves[s] = {"Shimmy","Shake","Pirouette","Slide","BoxStep","Headspin","Dosado","pop","Lock","Arabesque"};
    int size = 4;
    int pin[size];
    for(int i = 0; i < size;i++)
    {
    cout << "Enter number: ";
    cin >> pin[i];
    }
    int idx = 0;
    for(int i = 0; i < size; i++)
    {
        while(idx <= i)
        {
        if(pin[i] == i)
        {
            cout << moves[idx];   
        }
        idx = idx + 1;
        }
    }
}