#include<iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter how much color patterns you want to use: ";
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter color: ";
        cin >> arr[i];
    }
    int total;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    n = n - 1;
    total = count * 2;
    total = total + n;
    cout << total;
}