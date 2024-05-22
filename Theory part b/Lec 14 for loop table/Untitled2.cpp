#include <iostream>

using namespace std;

int main() {
    int number;

    // Input number from the user
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    // Print the multiplication table
    cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= -1; i++) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}

