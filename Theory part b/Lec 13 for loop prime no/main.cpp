#include <iostream>

using namespace std;

int main() {
    int limit;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> limit;

    // Check if the limit is valid
    if (limit <= 1) {
        cout << "Invalid input. Please enter a positive integer greater than 1." << endl;
        return 1;
    }

    // Print prime numbers up to the limit
    cout << "Prime numbers up to " << limit << " are: ";
    for (int num = 2; num <= limit; ++num) {
        bool isPrime = true;

        // Check if num is prime
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // Print if num is prime
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}

