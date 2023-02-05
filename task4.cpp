#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter number of integers you want to enter: ";
    cin >> size;
    int arr[size];
    for(int idx = 0; idx < size; idx++)
    {
    cout << "Enter integer: ";
    cin >> arr[idx];
    }
    bool r = false;
    int n;
    for(int idx = 0; idx < size; idx++)
    {
        if(arr[idx] % 10 == 7)
        {
            n = arr[idx] / 10;
            r = true;
        }
    }
    if(r == true)
    {
        cout << "BOOM!";
    }
    else
    {
        cout << "there is no 7 in the array....";
    }
}