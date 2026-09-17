#include <iostream>
#include <cmath>

using namespace std;

// Addition function
double add(double a, double b) {
    return a + b;
}

// Subtraction function
double subtract(double a, double b) {
    return a - b;
}

// Multiplication function
double multiply(double a, double b) {
    return a * b;
}

// Division function
double divide(double a, double b) {
    if (b == 0) {
        cout << "Division by zero is invalid!" << endl;
        return 0;
    }
    return a / b;
}

// Power function
double power(double a, double b) {
    return pow(a, b);
}

// Square Root function
double squareRoot(double a) {
    if (a < 0) {
        cout << "Square root of negative number is not possible!" << endl;
        return 0;
    }
    return sqrt(a);
}

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n***** CALCULATOR *****" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Square Root" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Answer = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Answer = " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Answer = " << multiply(num1, num2) << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Answer = " << divide(num1, num2) << endl;
            break;

        case 5:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Answer = " << power(num1, num2) << endl;
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Answer = " << squareRoot(num1) << endl;
            break;

        case 0:
            cout << "Program Ended!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}
