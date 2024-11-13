#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, I am Joaqaz Perez !!! Welcome to my first C++ Application" "\n";
    string name;
    cout << "Hey ! What is your name? \n";
    cin >> name;
    cout << "Good Day " << name << "! It's nice to meet you ! \n\n"; 
    
    int Day, Year;
    string Month;
    cout << "When is your Birthday? \n";
    cout << "Month: \n";
    cin >> Month;
    cout << "Day: \n";
    cin >> Day;
    cout << "Year: \n";
    cin >> Year;
    
    int leapyear = Year %4;
    cout << "Value: " << leapyear <<"\n";
    if (leapyear == 0)
    cout << "Nice you're a leap year";
    else
    cout << "Not a Leap Year";
    
    return 0;
}


