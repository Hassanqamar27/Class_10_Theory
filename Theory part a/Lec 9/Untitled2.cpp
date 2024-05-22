#include <iostream>
using namespace std;	
int main() {
    int percentage;

    cout << "Enter the student's percentage: ";
    cin >> percentage;

    if (percentage >= 80) {
        cout << "Grade: A+" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 50) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F  Q bhai a gya na swad" << endl;
    }
//    switch
       int dayNumber;

    cout << "Enter a day number (1-7): ";
    cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Error: Invalid day number." << endl;
            return 1; // Exit 1 is error
    }
    
    
    
    
    double num1, num2, result;
    char operation;

    // Input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;
   
    // Perform the calculation based on the operator
    // switch  
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Exit with an error code 
    }
    
    

    // Output the result
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}

