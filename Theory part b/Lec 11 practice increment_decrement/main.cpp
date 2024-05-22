#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char** argv) {
	
	
	// Incremenet++
	// decremenet--

	// POST  Incremenet => phely print phr plus =>
	// PRE Incremenet =>pehly add karo phr print karo
	int num1 = 50;   
 	num1 = num1++;
 	cout << "num1 = "<< num1 << endl;
 	//output = 50
 	
 	
  	num1 = ++num1;
	cout << "num1 = "<< num1 << endl;
	//output = 51
	
	
 	cout << "num1 = "<< num1 << endl;

	//guess ouput


	// POST  Decremenet => phely print phr minus 
	// PRE Decremenet =>pehly minus karo phr print karo
	num1 = 50;
	num1 = num1--;
 	cout << "num1 = "<< num1 << endl;
 	//output = 50
 	
 	
  	num1 = --num1;
	cout << "num1 = "<< num1 << endl;
	//output = 51
	
	
 	cout << "num1 = "<< num1 << endl;
 	
 	
 	
 	
	// 	Practice it with your own
 	
	num1 = 10;       //11      //12 //13
	int result = num1++ + num1++ + ++num1;
	cout << "Result = "<< result << endl;
	// //   10    +  11    +   13
	// 34

	num1 = 10;
	result = num1 + ++num1 + num1++ + num1 + num1++;
	cout << "Result = "<< result << endl;
	//  10  +   11   +   11  +  12   +  12

	result = num1 + ++num1 + ++num1 + num1++ + ++num1 + num1;
	cout << "Result = "<< result << endl;	
	//    10  +   11   +   12  +   12    +  14    + 14

	result = num1 - num1++ + --num1 + num1++ + num1--;
	cout << "Result = "<< result << endl;
	
	
	result = num1 - num1++ + --num1 + num1++ + num1--;
	cout << "Result = "<< result << endl;
	
	
	
	num1 = 10;  //11  / 12  //11  /10  / 9
	result = num1 + ++num1 + num1++ + --num1 - num1-- - --num1;
	cout << "Result = "<< result << endl;
	//	  10   +  11    +   11    +  11   - 11   - 9 
	
	

	num1 = 12;  //13  //12 //13  //12  //11
	result = num1++ - --num1 + num1 + ++num1 + num1-- - --num1;
	cout << "Result = "<< result << endl;
    // 12    -   12    + 12  +   13   +   13  -  11 
    
//    output 27


	result = num1-- + num1++ + num1++ - --num1 - --num1 - num1-- + num1;
	cout << "Result = "<< result << endl;
	
	
	result = ++num1 + ++num1 - --num1 - num1 + num1;
	cout << "Result = "<< result << endl;
	
	
	result = num1 + num1 + ++num1 + --num1 - --num1 + ++num1 + --num1-num1;
	cout << "Result = "<< result << endl;


	
	
	return 0;
}
