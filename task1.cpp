#include<iostream>
using namespace std;
int main()
{
    int size=4;
    int kgs,total;
    string name;
    string fruit[size] = {"peach" , "apple" , "guava" , "watermelon"};
    int price[size] = {60,70,40,30};
    cout << "Enter name of the fruit: ";
    cin >> name;
    cout << "Enter number of kgs: ";
    cin >> kgs;
    for(int idx = 0; idx < size; idx++)
    {
        if(name == fruit[idx])
        {
            total = kgs * price[idx];
        }
    }
    cout << "Total price will be: " << total;
}