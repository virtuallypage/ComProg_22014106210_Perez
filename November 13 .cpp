#include <iostream>
using namespace std;

// Find Zodiac sign
string findZodiacSign(int day, int month) {
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "Pisces";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        return "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        return "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return "Sagittarius";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return "Capricorn";
    } else {
        return "Invalid date";
    }
}

// Find Chinese Zodiac based on year
string findChineseZodiac(int year) {
    int chineseanimal = year % 12;
    if (chineseanimal == 0) return "Rat";
    else if (chineseanimal == 1) return "Ox";
    else if (chineseanimal == 2) return "Tiger";
    else if (chineseanimal == 3) return "Rabbit";
    else if (chineseanimal == 4) return "Dragon";
    else if (chineseanimal == 5) return "Snake";
    else if (chineseanimal == 6) return "Horse";
    else if (chineseanimal == 7) return "Goat";
    else if (chineseanimal == 8) return "Monkey";
    else if (chineseanimal == 9) return "Rooster";
    else if (chineseanimal == 10) return "Dog";
    else return "Pig";
}

int main() {
    cout << "Hello, I am Joaqaz Perez !!! Welcome to my first C++ Application\n";
    string name;
    cout << "Hey! What is your name? \n";
    cin >> name;
    cout << "Good Day " << name << "! It's nice to meet you!\n\n";

    char choice = 'y';
    
    while (choice == 'y' || choice == 'Y') {
        int day, year, month;
        cout << "When is your Birthday? \n";
        cout << "Month (1-12): ";
        cin >> month;
        cout << "Day: ";
        cin >> day;
        cout << "Year: ";
        cin >> year;

        // Check for leap year
        if (year % 4 == 0) {
            cout << "Nice! You were born in a leap year.\n";
        } else {
            cout << "Not a leap year.\n";
        }

        // Find Zodiac Sign
        string zodiacSign = findZodiacSign(day, month);
        if (zodiacSign != "Invalid date") {
            cout << "Your zodiac sign is: " << zodiacSign << endl;;
        } else {
            cout << "You entered an invalid date. Please try again" << endl;;
        }

        // Find Chinese Zodiac
        string chineseZodiac = findChineseZodiac(year);
        cout << "Your Chinese Zodiac animal is: " << chineseZodiac << endl;;

        // Ask if they want to input another birthday
        cout << "\nWould you like to add another birthday? (y/n): ";
        cin >> choice;
    }

    cout << "Thank you for using. Goodbye\n";
    return 0;
}
