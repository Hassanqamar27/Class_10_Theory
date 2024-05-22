#include <iostream>

using namespace std;

int main() {
	
//This is even no program as the book example given

	
	
    int n;
    
    cout << "Enter the limit: ";
    cin >> n;

    cout << "Even numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

