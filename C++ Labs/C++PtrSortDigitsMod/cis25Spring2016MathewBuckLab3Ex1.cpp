/*
Program Name:  cis25Spring2016MathewBuckLab3Ex1.cpp
Discussion:    Lab 3 Ex1
Written by:    Mathew Buck
Date:          2016/02/25
*/

#include <iostream>
using namespace std;


//------------------------------------------------------
//FUNCTION PROTOTYPES//////////////////////////////////
//------------------------------------------------------

void menu(void);

int* extractUncommonDigitMathewBuck(int[], int);

int* findOccurrences(int);

int* totalOccurrences(int*[], int);

int* findUncommon(int[]);


//------------------------------------------------------
//DRIVER////////////////////////////////////////////////
//------------------------------------------------------

int main() {

	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Mathew Buck" << endl;
	cout << endl;
	cout << "Assignment Information --" << endl;
	cout << "  Assignment Number:  Lab 03," << endl;
	cout << "                      Coding Assignment -- "
		<< "Exercise #1" << endl;
	cout << "  Written By:         Mathew Buck" << endl;
	cout << "  Submitted Date:     2016/02/25" << endl;
	cout << endl;

	menu();

	return 0;
}

//------------------------------------------------------
//FUNCTION DEFINITIONS/////////////////////////////////
//------------------------------------------------------

/*
This function displays a menu and stores 
the user input in a dynamic int array.
*/
void menu() {

	int *ptr1 = nullptr;
	int *finalPtr = nullptr;
	int option;
	int size;
	int i;

	do {
		cout << "***********************************************" << endl;
		cout << "*                     MENU                    *" << endl;
		cout << "* 1. Calling extractUnCommonDigitMathewBuck() *" << endl;
		cout << "* 2. Quit                                     *" << endl;
		cout << "***********************************************" << endl;
		cout << "Select an option (1 or 2): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:

			cout << "  How many integers? ";
			cin >> size;

			//ptr1 points to the address of a dynamaic int array,
			//the dynamic array will be used to store the user input
			ptr1 = new int[size];

			//stores user input in a dynamic int array
			for (i = 0; i < size; i++) {
				cout << "    Enter integer #" << i + 1 << ": ";
				cin >> *(ptr1 + i);
			}

			cout << endl;
			cout << "  The original array: " << endl;

			for (i = 0; i < size; i++) {
				cout << "    " << *(ptr1 + i) << endl;
			}

			cout << endl;
			cout << "  Calling extractUncommonDigitMathewBuck() -"
				<< endl;
			cout << endl;
			cout << "  Displaying after returning the array -- "
				<< "The uncommon digits:" << endl;
			cout << "    There is/are ";

			//store address of final soulution array in finalPtr
			finalPtr = extractUncommonDigitMathewBuck(ptr1, size);

			//if uncommon digits are identified, they are displayed
			if (*(finalPtr) != 0) {
				cout << *(finalPtr);
				cout << " uncommon digit(s)" << endl;

				for (i = 0; i <
					*(finalPtr); i++) {
					cout << "      " <<
						*(finalPtr + i + 1) << endl;
				}
				cout << endl;
				cout << endl;
			}

			//displays "no" if no uncommon digits were identified
			else {
				cout << "no uncommon digit(s)" << endl;
				cout << endl;
				cout << endl;
			}

			//releases the dynamic array that 
			//extractUncommonDigitMathewBuck() returned
			delete[] finalPtr;

			//releases the dynamic array of integers that the user
			//entered
			delete[] ptr1;
			ptr1 = nullptr;

			break;

		case 2:

			cout << "  Fun Exercise ..." << endl;
			cout << endl;
			break;

		default:

			cout << "  Wrong Opton!" << endl;
			cout << endl;
			break;
		}

	} while (option != 2);
}


/*
This function returns the address of an array containing the
number of uncommon digits (stored at index 0) and the actuall
uncommon digits by calling a series of sub-functions.
*/
int* extractUncommonDigitMathewBuck(int input[], int size) {

	int *ptr1 = nullptr;
	int **ptrPtr = nullptr;

	//points to the address of the same dynamic int array 
	//that contains the user input
	ptr1 = input;

	//points to the address of a dynamic array*[] that
	//contains the addresses of the arrays that contain
	//the digit occurrences
	ptrPtr = new int*[size];


	//creates an array containing the digit 
	//occurrences for each int that the user entered
	for (int i = 0; i < size; i++) {
		*(ptrPtr + i) = findOccurrences(*(ptr1 + i));
	}

	return findUncommon(totalOccurrences(ptrPtr, size));
}


/*
This function creates a dynamic int array containing the
occurrences of each digit for each of the integers
that the user entered.
*/
int* findOccurrences(int input) {

	int temp = input;
	int *ptr2 = nullptr;

	//absolute value
	temp = (temp < 0) ? -temp : temp;

	//ptr2 points to the address of a new dynamic 
	//int array containg the occurrences of each 
	//digit contained in the input
	ptr2 = new int[10];

	//initializes to 0
	for (int i = 0; i < 10; i++) {
		*(ptr2 + i) = 0;
	}

	//stores occurrences in the dynamic int array
	do {
		(*(ptr2 + (temp % 10)))++;
		temp /= 10;
	} while (temp != 0);

	return ptr2;
}


/*
This function creates a dynamic int array containg the
grand total of the digit occurrences for all
of the integers that the user entered.
*/
int* totalOccurrences(int* input[], int numArys) {

	int  **ptrPtr = nullptr;
	int size = numArys;
	int *ptr3 = nullptr;

	//points to the address of the dynamic array 
	//that contains the addresses of the individual
	//dynamic arrays that contain the digit occurences 
	//for each of the integers that the user entered
	ptrPtr = input;

	//points to the address of a dynamic array 
	//that contains the grand total of the 
	//digit occurrences for all of the 
	//integers that the user entered
	ptr3 = new int[10];

	for (int i = 0; i < 10; i++) {
		*(ptr3 + i) = 0;
	}


	//compares the digits at each index (i and j both = 0)
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 10; j++) {

			//only increments if the sum is greater than 
			//zero (IE the int 777 will only count as 1 
			//occurrence of the digit 7). 
			if (*(*(ptrPtr + i) + j) > 0) {
				(*(ptr3 + j))++;
			}
		}
	}

	//releases the memory associated with all of the 
	//digit occurence arrays
	for (int i = 0; i < size; i++) {
		delete[] *(ptrPtr + i); 
	}

	//releases the memory associated with the int*[] 
	//containing the addresses to the occurence arrays
	delete[] ptrPtr;

	return ptr3;
}


/*
This function creates a dynamic array containing
the total number of uncommon digits (index 0),
as well as the actuall uncommon digits.
This function also sorts the uncommon digits from
even (lowest to hights values) to odd
lowest to highest values (0, 2, 4, 1, 3, 5...).
*/
int*   findUncommon(int input[]) {

	int *ptr4 = nullptr;
	int *ptr3 = nullptr;
	int count = 0;//number of actual common digits
	int ct = 1;//index of uncommon digits
	int temp = 0;
	int oddCt = 0;//number of loops, move evens # left

	//points to the address of the dynamic array 
	//that contains the grand total of the 
	//digit occurrences for all of the 
	//integers that the user entered
	ptr3 = input;

	//counts the total number of uncommon digits
	for (int i = 0; i < 10; i++) {
		if (*(ptr3 + i) == 1) {
			count++;
		}
	}

	//points to the address of a dynamic array 
	//containg the total number of uncommon digits
	//(located at index 1) as well as the actual
	//uncommon digits
	ptr4 = new int[count + 1];

	//intializes to 0
	for (int i = 0; i < count + 1; i++) {
		*(ptr4 + i) = 0;
	}

	//stores grand total of common digits at index 0
	*(ptr4 + 0) = count;

	//stores the even common digits in a dynamic array
	for (int i = 0; i < 10; i++) {
		if ((*(ptr3 + i) == 1) && (i % 2) == 0) {
			*(ptr4 + ct) = i;
			ct++;
		}
	}

	//stores the odd digits after the even digits
	for (int i = 0; i < 10; i++) {
		if ((*(ptr3 + i) == 1) && (i % 2) != 0) {
			*(ptr4 + ct) = i;
			ct++;
		}
	}

	//releases the memory associated with the total 
	//digit occurrences
	delete[] ptr3;

	return ptr4;
}


//------------------------------------------------------------
//PROGRAM OUTPUT////////////////////////////////////////////
//-----------------------------------------------------------

/*
CIS 25 - C++ Programming
Laney College
Mathew Buck

Assignment Information --
  Assignment Number:  Lab 03,
                      Coding Assignment -- Exercise #1
  Written By:         Mathew Buck
  Submitted Date:     2016/02/25

***********************************************
*                     MENU                    *
* 1. Calling extractUnCommonDigitMathewBuck() *
* 2. Quit                                     *
***********************************************
Select an option (1 or 2): 4

  Wrong Opton!

***********************************************
*                     MENU                    *
* 1. Calling extractUnCommonDigitMathewBuck() *
* 2. Quit                                     *
***********************************************
Select an option (1 or 2): 1

  How many integers? 3
    Enter integer #1: 32965
    Enter integer #2: -275721
    Enter integer #3: 3028063

  The original array:
    32965
    -275721
    3028063

  Calling extractUncommonDigitMathewBuck() -

  Displaying after returning the array -- The uncommon digits:
    There is/are 5 uncommon digit(s)
      0
      8
      1
      7
      9


***********************************************
*                     MENU                    *
* 1. Calling extractUnCommonDigitMathewBuck() *
* 2. Quit                                     *
***********************************************
Select an option (1 or 2): 1

  How many integers? 4
    Enter integer #1: 32965
    Enter integer #2: -275721
    Enter integer #3: 3028063
    Enter integer #4: 10789

  The original array:
    32965
    -275721
    3028063
    10789

  Calling extractUncommonDigitMathewBuck() -

  Displaying after returning the array -- The uncommon digits:
    There is/are no uncommon digit(s)


***********************************************
*                     MENU                    *
* 1. Calling extractUnCommonDigitMathewBuck() *
* 2. Quit                                     *
***********************************************
Select an option (1 or 2): 2

  Fun Exercise ...

*/

/*
Comments--Code and Logic:
No comments at this time.
*/