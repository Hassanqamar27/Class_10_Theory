#include <iostream>
#include <string> // Include the <string> header for string usage q k string is not default data type
#include <cstdlib> // Include the <cstdlib> header for rand() usage pre defined function ha 
using namespace std;

//function 2 kisam ka hota ha ek user defined and pre defined 

//pre defined means wo function jo hama c++ ka compiler ka bnae hua ha sqrt() , Pi(), etc

//user defined wo functions ha jo huma khud bnate ha

//4 types of user defined functions are as follows:


// Function without Parameters and Return Type
void greet() {
    cout << "Hello, World!" << endl;
}

// Function with Parameters and Return Type
int add(int a, int b) {
    return a + b;
}

// Function without Parameters but with Return Type
int getRandomNumber() {
    return rand() % 100; // Generates a random number between 0 and 99
}

// Function with Parameters but without Return Type (Void)
void printMessage(string message) {
    cout << "Message: " << message << endl;
}

// Recursive Function
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Inline Function
inline int square(int x) {
    return x * x;
}

// Function with Default Arguments
int multiply(int a, int b = 2) {
    return a * b;
}


//jesa ka sab ko pta ha int main bhi ek function hi ha lakin hamare user define function us waqt chale ga jab int main ma call honga
//jab C++ ka compiler chalta ha to sirf int main ka funtion hi run hota ha always remember it students
//isliya sare function call kera ha humna int main ma or konsa function ha comment ker dia read the comment
int main() {
    greet(); 												// Call Function without Parameters and Return Type
    cout << "Result: " << add(3, 5) << endl;				// Call Function with Parameters and Return Type
    cout << "Random Number: " << getRandomNumber() << endl; // Call Function without Parameters but with Return Type
    printMessage("This is a message");						// Call Function with Parameters but without Return Type (Void)
    cout << "Factorial of 5 is " << factorial(5) << endl;	// Call Recursive Function
    cout << "Square of 5 is " << square(5) << endl; 		// Call Inline Function
    cout << "Result: " << multiply(3) << endl; 				// Call Function with Default Arguments
    cout << "Result: " << multiply(3, 5) << endl; 			// Call Function with Default Arguments, providing a value for 'b'
    return 0;
}

//aj tamam coding khatam hogae if any problem occur contact me in my google class room or whatsapp no
