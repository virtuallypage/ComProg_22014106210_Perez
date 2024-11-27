#include <iostream>
using namespace std;

int main() {
    int operator;
    double num1, num2, result;

    while (true) {
        cout << "\nSelect an operator: \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";

        cout << "Enter your operator: ";
        cin >> operator;

        if (operator == 5) {
            cout << "Exiting the calculator. Goodbye!";
            break;
        }

        if (operator < 1 || operator > 4) {
            cout << "Invalid choice! Please select a valid operation.";
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        if (operator == 1) {
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result;
        } else if (operator == 2) {
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result;
        } else if (operator == 3) {
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result;
        } else if (operator == 4) {
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error. Division by zero is not allowed.";
            }
        }

        char restart;
        cout << "\nDo you want to perform another operation? (y/n): ";
        cin >> restart;

        if (restart == 'n' || restart == 'N') {
            cout << "Thank you for using the calculator. Goodbye!";
            break;
        }
    }

    return 0;
}
