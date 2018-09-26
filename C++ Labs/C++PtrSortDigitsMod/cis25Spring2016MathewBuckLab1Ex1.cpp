/*
Program Name:  cis25Spring2016MathewBuckLab1Ex1.cpp
Discussioin:   Lab 1 Ex1
Written by:    Mathew Buck
Date:          2016/02/9
*/

#include <iostream>
using namespace std;

//-------------------------------------------------------
//Function Prototypes////////////////////////////////////
//-------------------------------------------------------

int getLeastOccurredDigit(int);

//-------------------------------------------------------
//DRIVER//////////////////////////////////////////////////
//-------------------------------------------------------

int main() {

	int callNum = 1;
    int input;
	   
	//calls funtion 6 times
	do {

		cout << "Preparing to Call #" << callNum << " --" << endl;
		cout << endl;
		cout << "Enter an integer: ";
		cin >> input;
		cout << endl;
		cout << "Calling getLeastOccurredDigit() --" << endl;
		cout << endl;
		cout << "A LOD in " << input << " is "
			<< getLeastOccurredDigit(input) << "." << endl;
		cout << endl;
		cout << endl;

		callNum++;

	} while (callNum < 7);

	return 0;
}

//-------------------------------------------------------
//Function Definitions///////////////////////////////////
//-------------------------------------------------------

/*This function returns the least occuring digit (1-9)
in the case a tie, the digit with the lowest value
is returned
*/
int getLeastOccurredDigit(int num) {

	int digits;
	int maxFreq = 10;
	//set lod to highest possible value
	int lod = 9;
	int count;

	//absolute value
	digits = (num < 0) ? -num : num;

	//stores a value of 0 in all 10 elements
	int freq[10] = { 0 };

	//stores the number of a digits occurrances
	//in the digits corresponding element
	do {
		//extracts the rightmost digit
		//and increments its element
		freq[digits % 10]++;

		//eliminates right most digit
		digits /= 10;

		//element index equals digit and its
		//frequency is in its corresponding element
	} while (digits != 0);

	//calculates least occurring digit by
	//comparing from highest indx to lowest
	for (int i = 9; i >= 0; i--) {
		if (freq[i] <= maxFreq && freq[i] > 0) {
			count = freq[i];
			maxFreq = count;

			//in the case of a tie
			//only changes for lower value digit
			if (i <= lod) {
				lod = i;
			}
		}
	}
	
	return lod;

}

/*----------------------------------------------------------
PROGRAM OUTPUT//////////////////////////////////////////////
------------------------------------------------------------
Preparing to Call #1 --

Enter an integer: -45588524

Calling getLeastOccurredDigit() --

A LOD in -45588524 is 2.


Preparing to Call #2 --

Enter an integer: 213

Calling getLeastOccurredDigit() --

A LOD in 213 is 1.


Preparing to Call #3 --

Enter an integer: 42351654

Calling getLeastOccurredDigit() --

A LOD in 42351654 is 1.


Preparing to Call #4 --

Enter an integer: -555

Calling getLeastOccurredDigit() --

A LOD in -555 is 5.


Preparing to Call #5 --

Enter an integer: 6111666

Calling getLeastOccurredDigit() --

A LOD in 6111666 is 1.


Preparing to Call #6 --

Enter an integer: 0

Calling getLeastOccurredDigit() --

A LOD in 0 is 0.


*/

/*Comments--Code and Logic:
No comments at this time.
*/