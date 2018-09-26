/*
Program Name:  cis25Spring2016MathewBuckLab2Ex1.cpp
Discussioin:   Lab 2 Ex1
Written by:    Mathew Buck
Date:          2016/02/11
*/

#include <iostream>
using namespace std;

//-------------------------------------------------------
//FUNCTION PROTOTYPES////////////////////////////////////
//-------------------------------------------------------

void menu();

int getLeastOccurredDigit(int);

int getMostOccurredDigit(int);

//-------------------------------------------------------
//DRIVER//////////////////////////////////////////////////
//-------------------------------------------------------

int main() {

	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Mathew Buck" << endl;
	cout << endl;
	cout << "Assignment Information --" << endl;
	cout << "  Assignment Number:  Lab 02," << endl;
	cout << "                      Coding Assignment -- " 
		<< "Exercise #1" << endl;
	cout << "  Written by:         Mathew Buck" << endl;
	cout << "  Submitted Date:     2016/02/11" << endl;
	cout << endl;
	cout << endl;

	menu();

	return 0;
}

//-------------------------------------------------------
//FUNCTION DEFINITIONS///////////////////////////////////
//-------------------------------------------------------

/*
This Function displays a menu which allows the user to
input an interger and call sub-functions that return the 
integer's most or least occuring digit.
*/
void menu() {

	int option;
	int input;

	do {
		cout << "**************************************" << endl;
		cout << "*                  MENU              *" << endl;
		cout << "* (1) Calling getMostOccuredDigit()  *" << endl;
		cout << "* (2) Calling getLeastOccuredDigit() *" << endl;
		cout << "* (3) Quit                           *" << endl;
		cout << "**************************************" << endl;
		cout << "Enter your option (1, 2, or 3): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:
			cout << "Enter an interger: ";
			cin >> input;
			cout << endl;
			cout << "Calling getMostOccurredDigit() --" << endl;
			cout << endl;
			cout << "The digit occured most in " << input << " is ";
			cout << getMostOccurredDigit(input) << "." << endl;
			cout << endl;
			break;

		case 2:
			cout << "Enter an interger: ";
			cin >> input;
			cout << endl;
			cout << "Calling getLeastOccurredDigit() --" << endl;
			cout << endl;
			cout << "A LOD in " << input << " is ";
			cout << getLeastOccurredDigit(input) << "." << endl;
			cout << endl;
			break;

		case 3:
			cout << "Working Good!" << endl;
			cout << endl;
			break;

		default:
			cout << "WRONG OPTION!" << endl;
			cout << endl;
			break;
		}

	} while (option != 3);
}


/*
This function returns the least occuring digit (1-9)
in the case a tie, the digit with the lowest value
is returned
*/
int getLeastOccurredDigit(int num) {

	int digits;
	int maxFreq = 10;
	//set lod to highest possible value
	int lod = 9;

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
			maxFreq = freq[i];

			//in the case of a tie
			//only changes for lower value digit
			if (i <= lod) {
				lod = i;
			}
		}
	}
	return lod;
}


/*
This function returns the most occuring digit (1-9)
in the case a tie, the digit with the lowest value
is returned
*/
int getMostOccurredDigit(int num) {

	int digits = 0;
	int minFreq = 0;
	//set mod to highest possible value
	int mod = 9;

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

	//calculates most occurring digit by
	//comparing from highest indx to lowest
	for (int i = 9; i >= 0; i--) {
		if (freq[i] >= minFreq) {
			minFreq = freq[i];

			//in the case of a tie
			//only changes for lower value digit
			if (i < mod) {
				mod = i;
			}
		}
	}
	return mod;
}


//--------------------------------------------------
//PROGRAM OUTPUT////////////////////////////////////
//------------------------------------------------

/*
CIS 25 - C++ Programming
Laney College
Mathew Buck

Assignment Information --
  Assignment Number:  Lab 02,
                      Coding Assignment -- Exercise #1
  Written by:         Mathew Buck
  Submitted Date:     2016/02/11


**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 4

WRONG OPTION!

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 1

Enter an interger: 123444034

Calling getMostOccurredDigit() --

The digit occured most in 123444034 is 4.

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 1

Enter an interger: -390345505

Calling getMostOccurredDigit() --

The digit occured most in -390345505 is 5.

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 1

Enter an interger: 39034550

Calling getMostOccurredDigit() --

The digit occured most in 39034550 is 0.

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 2

Enter an interger: -45588524

Calling getLeastOccurredDigit() --

A LOD in -45588524 is 2.

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 2

Enter an interger: 42351654

Calling getLeastOccurredDigit() --

A LOD in 42351654 is 1.

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 2

Enter an interger: -555

Calling getLeastOccurredDigit() --

A LOD in -555 is 5.

**************************************
*                  MENU              *
* (1) Calling getMostOccuredDigit()  *
* (2) Calling getLeastOccuredDigit() *
* (3) Quit                           *
**************************************
Enter your option (1, 2, or 3): 3

Working Good!

*/

/*
Comments--Code and Logic:
No comments at this time.
*/