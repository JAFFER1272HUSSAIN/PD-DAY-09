#include<iostream>
using namespace std;
main()
{
    string s1,s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    int count = 0;
    int j = 0;
    for(int i = 0;s1[i] != '\0'; i++ )
    {
        while(s2[j] != '\0')
        {
        if(s1[i] == s2[j])
        {
            count++;
            
        }
        j++;
        }
    }
    cout << "Common characters are: " << count;
}