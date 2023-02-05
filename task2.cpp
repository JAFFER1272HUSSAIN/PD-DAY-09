#include<iostream>
using namespace std;
main()
{
    char movie;
    int ticket = 500;
    string movies[5] = {"Gladiator","StarWars","Terminator","TakingLives","TombRider"}; 
    cout << "Enter name of movie: ";
    cin >> movie;
    int idx = 0;
    float total;
    while(idx != '\0')
    {
        idx++;
    }
    if(idx % 2 == 0)
    {
        total = ticket * (10.0 / 100);
        total = ticket - total;
    }
    else
    {
        total = ticket * (5.0 / 100);
        total = ticket - total;
    }
    cout << "Ticket price is: " << total;

}