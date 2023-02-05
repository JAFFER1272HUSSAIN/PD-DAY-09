#include<iostream>
using namespace std;
main()
{
    string n;
    int l;
    cout << "Enter any string: ";
    cin >> n;
    l = n.length();
    if(l % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}