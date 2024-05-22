#include <iostream>

#include <cstdio>   // For getchar and putchar ka lia ya header file lagti ha
#include <conio.h>  // For getch and getche la lia ya header file lagti ha
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	
//    // Fundamental Data Types matlab jo normal hota ha 5
//    
////    int sirf 4 byte 10 decimal(.) ka bagher value save kerwa sakta ha 
//
//    int integerVar = 1234567891;
//    
////    float 4 byte save kerta ha 
//    float floatVar = 3.14;
//    
////    double 8 byte tak value save kerta ha 
//    double doubleVar = 2.71828;
//    
////    char 1 byte ek koi bhi value save kerwata ha character data type
//    char charVar = 'A';
//    
////    bool 1 byte lata ha jaga
//    bool boolVar = true;
//
//    cout << "Fundamental Data Types:" << endl;
//    cout << "Integer: " << integerVar << endl;
//    cout << "Float: " << floatVar << endl;
//    cout << "Double: " << doubleVar << endl;
//    cout << "Char: " << charVar << endl;
//    cout << "Boolean: " << boolVar << endl;
//
//    // data type badi value save kerwana ka liya modifiers ka istemal hota ha 
//    cout << "\nModifiers:" << endl;
//    short shortVar = 32767;
//    long longVar = 2147483647;
//    long long longLongVar = 9223372036854775807;
//
//    cout << "Short: " << shortVar << endl;
//    cout << "Long: " << longVar << endl;
//    cout << "Long Long: " << longLongVar << endl;
//    
//    
//    
//     // puts and putchar
//    puts("Using puts:");
//    puts("Hello, world!");
//
//    putchar('\n');
//
//    // cout
//    cout << "Using cout:" << endl;
//    cout << "Hello, world!" << endl;
//	//    cin
//    cout << "\nUsing cin:" << endl;
//    cout << "Enter your name: ";
//    string name;
//    cin >> name;
//    cout << "Hello, " << name << "!" << endl;
//    
//    
////    ek martaba cin use kerna ka bad dosri martaba ka liya value htao porani
//    cin.ignore(); // Clear the input buffer
//
//
//
//    // cin ka dosra tarika
//    cout << "\nUsing cin:" << endl;
//    cout << "Enter your name: ";
//    string naamBta;
//    getline(cin, naamBta);
//    cout << "Hello, " << naamBta << "!" << endl;
//
//    // getch
//    cout << "\nUsing getch:" << endl;
//    cout << "Press a key: ";
//    char key = getch();
//    cout << "You pressed: " << key << endl;
//
//    // getche
//    cout << "\nUsing getche:" << endl;
//    cout << "Press a key: ";
//    char keyGetche = getche();
//    cout << "\nYou pressed: " << keyGetche << endl;
//
//    // getchar
//    cout << "\nUsing getchar:" << endl;
//    cout << "Press Enter to continue...";
//    getchar();  // Waits for the user to press Enter
//    
//    
//    
//    //  Newline and Tab
//    
// 	//  \n new line ka lia hota ha \t tab yani 4 space ka gap deta ha
// 	
//	// 	endl and \n ek hi kam ha dono ka line break
//    cout << "Hello, World!" << endl;
//    cout << "This is a new line.\n";
//    
//	//    \t 4 space deta ha
//    cout << "This sentence\t is tabbed.\n";
//
//    // \b Backspace kerta ha 
//    cout << "One\bTwo\n";  // Deletes the 'e' in 'One' then On ayega
//
//    // \r ovewrite kare ga Carriage ko Return sa
//    cout << "Carriage\rReturn\n";  // Overwrites 'Carriage' with 'Return'
//
//    // \a Alert deta ha yani (Beep) sound
//    cout << "This will make a beep sound.\a\n";
//    
//	//	mzak ma multi line comment bhi dekhlo kese use kerta ha
//	
//    /* Double Quote and Single Quote string ma lana ka \ ka sath likhta ha warna string ka 
//	   quote samjha ga compiler  */
//    cout << "Double Quote: \"Hello\"\n";
//    cout << "Single Quote: \'A\'\n";
//
//    // \\Backslash print kerta ha
//    cout << "This is a backslash: \\ \n";
//    
//    
//    // Arithmetic Operators
//    int a = 10, b = 3;
//    int sum = a + b;
//    int difference = a - b;
//    int product = a * b;
//    int divide = a / b;
//	//    ya modulus nhi padhaya tha ankh khol ker is ko dekhlo
//    int remainder = a % b;
//
//    cout << "Arithmetic Operators:" << endl;
//    cout << "Sum: " << sum << endl;
//    cout << "Difference: " << difference << endl;
//    cout << "Product: " << product << endl;
//    cout << "Divide: " << divide << endl;
//    cout << "Remainder: " << remainder << endl;
//
//    // Relational Operators
//    bool isEqual = (a == b);
//    bool isNotEqual = (a != b);
//    bool isLessThan = (a < b);
//    bool isGreaterThan = (a > b);
//    bool isLessOrEqual = (a <= b);
//    bool isGreaterOrEqual = (a >= b);
//
//    cout << "\nRelational Operators:" << endl;
//    cout << "Equal: " << isEqual << endl;
//    cout << "Not Equal: " << isNotEqual << endl;
//    cout << "Less Than: " << isLessThan << endl;
//    cout << "Greater Than: " << isGreaterThan << endl;
//    cout << "Less or Equal: " << isLessOrEqual << endl;
//    cout << "Greater or Equal: " << isGreaterOrEqual << endl;
//
//    // Logical Operators wo hi ha jo padhay tha truth table banwa ker and or not 
//	//	yahan true 1 hota ha aur false 0 hota ha 
//    
//    bool condition1 = true;
//    bool condition2 = false;
//
//    bool resultAnd = (condition1 && condition2);
//    bool resultOr = (condition1 || condition2);
//    bool resultNot = !condition1;
//
//    cout << "\nLogical Operators:" << endl;
//    cout << "AND: " << resultAnd << endl;
//    cout << "OR: " << resultOr << endl;
//    cout << "NOT: " << resultNot << endl;
//
//    // Assignment Operators ya kam kerta ha a = a + 10
//    cout << "\nAssignment Operators:" << endl;
//	//    ya kam kerta ha a = a + 10
//    a += 10;
//    cout << "a += 10: " << a << endl;
//    //    ya kam kerta ha a = a - 5
//    a -= 5;
//    cout << "a -= 5: " << a << endl;
//    //    ya kam kerta ha b = b * 4
//    b *= 4;
//    cout << "b *= 4: " << b << endl;
//	//    ya kam kerta ha b = b / 2    
//    b /= 2;
//    cout << "b /= 2: " << b << endl;
//    
//
//    // Increment and Decrement Operators
//    a++;
//    b--;
//
//    cout << "\nIncrement and Decrement Operators:" << endl;
////    a = a+1
//    cout << "a++: " << a << endl;
////    b = b-1
//    cout << "b--: " << b << endl;
	int a = 7, b = 3;
//    // Conditional Operator ternary operator lambi haya btana ha sahi sa
    int maxNumber = (a > b) ? a : b;

    cout << "\nConditional Operator:" << endl;
    cout << "Max Number: " << maxNumber << endl;
    
    
    

//     Bitwise Operators  is ma ek aur bat ya ha ka variable overwrite kia ha porana wala ko
    a = 5;  // binary: 0101
    b = 3;  // binary: 0011

    //ya in ko binary no ma convert ker ka operation perform kia ha
    int bitwiseAnd = a & b; // binary: 0001 (1 in decimal) and gate
    int bitwiseOr = a | b;  // binary: 0111 (7 in decimal) or gate
    int bitwiseXor = a ^ b; // binary: 0110 (6 in decimal) xor gate
    int bitwiseNot = ~a;    // binary: 1010 (signed integer representation) not gate
    int leftShift = a << 2; // binary: 010100 (20 in decimal)
    a = 20;
    int rightShift = a >> 2;// binary: 000101 (5 in decimal)

    cout << "\nBitwise Operators:" << endl;
    cout << "Bitwise AND: " << bitwiseAnd << endl;
    cout << "Bitwise OR: " << bitwiseOr << endl;
    cout << "Bitwise XOR: " << bitwiseXor << endl;
    cout << "Bitwise NOT: " << bitwiseNot << endl;
    cout << "Left Shift: " << leftShift << endl;
    cout << "Right Shift: " << rightShift << endl;
	return 0;
}
