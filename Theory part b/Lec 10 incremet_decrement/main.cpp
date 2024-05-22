#include <iostream>
using namespace std;

int main() {
    // Pre-increment and post-increment examples
    int num1 = 5;
    int num2 = 5;
    // increment ka matlab mana btaya tha ka porana number ma sirf 1 +  kare num1 = num1+1

    // Pre-increment: Increment the value first, then use it ka matlab ha pehla 1 add karo phir print
    
    int result_pre_increment = ++num1;
    cout << "Pre-increment: " << result_pre_increment << endl;  
	
	// Output: 6



    // Post-increment: Use the value first, then increment it ka matlab ha pehla print phir add
    
    
    int result_post_increment = num2++;
    cout << "Post-increment: " << result_post_increment << endl; 
	// Output: 5



    // Pre-decrement and post-decrement examples
    int num3 = 5;
    int num4 = 5;




	// decrement ka matlab ha 1 - karo porana no ma phir us ma hi save karo ja naya no aya ha
	
    // Pre-decrement: Decrement the value first, then use it ka matlab ha pehla 1 minus karo phir print
    int result_pre_decrement = --num3;
    cout << "Pre-decrement: " << result_pre_decrement << endl;  
	// Output: 4



    // Post-decrement: Use the value first, then decrement it ka matlab ha pehla print phir minus
    int result_post_decrement = num4--;
    cout << "Post-decrement: " << result_post_decrement << endl; 
	// Output: 5

    return 0;
}

 
