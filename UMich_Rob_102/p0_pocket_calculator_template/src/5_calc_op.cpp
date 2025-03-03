#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Please type a number and press enter: ";
    cin >> num1;

    cout << "Please type a math operator (one of: + - * or /): ";
    cin >> operation;

    cout << "Please type another number and press enter: ";
    cin >> num2;

    if (num2 == 0 && operation == '/') {
        cerr << "Error: Divide by zero attempted!!!" << "\n";
        return -1;
    } else if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/')) {
        cerr << "Error: specified operation (" << operation << ") not recognized." << "\n";
        return -1;
    }else {
        cout << "Here's the result of the operation!" << "\n";

        if (operation == '+'){
            cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2 << "\n";
        } else if (operation == '-')
        {
            cout << num1 << " " << operation << " " << num2 << " = " << num1 - num2 << "\n";
        } else if (operation == '*')
        {
            cout << num1 << " " << operation << " " << num2 << " = " << num1 * num2 << "\n";
        }
        else {
            cout << num1 << " " << operation << " " << num2 << " = " << num1 / num2 << "\n";
        }
    }
}