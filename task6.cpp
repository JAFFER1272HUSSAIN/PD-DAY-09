#include<iostream>
using namespace std;
main()
{
    int size = 3;
    int arr[size];
    int n;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the array: ";
        cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;
    int total;
    for(int idx = 0 ; idx < size; idx++)
    {
        if(arr[idx] % 2 == 0)
        {
            arr[idx] = arr[idx] - (2 * n);
        }
        else
        {
            arr[idx] = arr[idx] + (2 * n);
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

}