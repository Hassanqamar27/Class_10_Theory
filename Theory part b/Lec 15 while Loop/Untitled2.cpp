//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char ch;
//    int count = 0;
//
//    cout << "Enter characters (Press Enter to end): ";
//    
//    // Loop to get characters until Enter key is pressed
//	//    .get ek method padha tha iski jagah getch() bhi istemal ker sakta ha book ma jesa ha
//	// lakin \r nhi likhna wo ghalat ha
//    while (cin.get(ch) && ch != '\n'){
//	
//        count++;
//    }
//
//    cout << "You typed " << count << " characters." << endl;
//
//    return 0;
//}



//mera hisab sa ya program zyada acha ha is liya laga diy warna book wala hi ker lo 
//mera jo code ha wo sab situation ma kam kare ga 
#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

int main() {
    int totalSalary = 0;
    int salary;
    char choice;

    cout << "Enter the salary of each employee (enter 'y' to add salary, any other character to finish):" << endl;

    do {
        // Prompt the user to enter salary
        cout << "Enter salary: ";
        
        // Check if input is numeric
        if (!(cin >> salary)) {
            // Clear the input buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numeric value." << endl;
            continue;
        }

        // Add salary to the total if it's non-negative
        if (salary >= 0) {
            totalSalary += salary;
        } else {
            // If salary is negative, break out of the loop
            break;
        }

        // Prompt the user for choice
        cout << "Add more salary? (y/n): ";
        cin >> choice;
        
        // Ignore extra characters in the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (choice == 'y' || choice == 'Y');

    cout << "Total salary paid to all employees: " << totalSalary << endl;

    return 0;
}



