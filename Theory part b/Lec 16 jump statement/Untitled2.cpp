#include <iostream>

using namespace std;

int main() {
    int num;
    char choice;

    // Example of break statement
    cout << "Example of break statement:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
        if (i == 3) {
            cout << "(Breaking loop)";
            break; // Exit the loop when i is 3
        }
    }
    cout << endl << endl;

    // Example of continue statement
    cout << "Example of continue statement:" << endl;
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) {
            cout << "(Skipping 3) ";
            continue; // Skip printing 3
        }
        cout << i << " ";
    }
    cout << endl << endl;

    // Example of goto statement
    cout << "Example of goto statement:" << endl;
    label:
    cout << "Enter a positive number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input!" << endl;
        goto label; // Jump to label if input is invalid
    }

    cout << "You entered: " << num << endl << endl;

    // Example of using jump statements with do-while loop
    cout << "Example of jump statements with do-while loop:" << endl;
    do {
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break; // Exit the loop if choice is not 'y' or 'Y'
        }
        cout << "Continuing..." << endl;
    } while (true);

    cout << "Exited do-while loop." << endl;

    return 0;
}

