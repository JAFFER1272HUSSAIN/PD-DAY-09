#include<iostream>
using namespace std;
main()
{
    int size = 4;
    string arr[size];
    int count = 0;
    for(int idx = 0; idx < size ; idx++)
    {
        cout << "Enter string: ";
        cin >> arr[idx];
    }
    for(int idx = 0; idx < size; idx++)
    {
        if(arr[0] == arr[idx])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";

    }
    
}