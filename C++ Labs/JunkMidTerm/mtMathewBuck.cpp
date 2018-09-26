/*
Program Name:   mtMathewBuck.cpp
Discussion:     Fucntion Definitions
Written By:     Mathew Buck
Date:           2016/03/12
*/

#include "mtMathewBuck.h"
#include <iostream>
using namespace std;

//--------------------------------------------
//FUNCTION DEFINITIONS//////////////////////
//--------------------------------------------


//default constructor
Midterm::Midterm() {
}


/*
This function displays a menu and stores
the user input in a dynamic int array.
*/
void Midterm::menuUncom(void) {

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
This function displays a menu and stores
the user input in a dynamic int array.
*/
void Midterm::menuUncomStats() {

	int* inputPtr = nullptr;
	int* ucPtr = nullptr;
	int* gusPtr = nullptr;
	int option;
	int size;
	int sizeGusPtr;
	int indexOdd;

	do {
		cout << "*****************************************************" << endl;
		cout << "*                     MENU                          *" << endl;
		cout << "* 1. Calling getUnCommonDigitStatisticsMathewBuck() *" << endl;
		cout << "* 2. Quit                                           *" << endl;
		cout << "*****************************************************" << endl;
		cout << "Select an option (1 or 2): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:

			cout << "  How many integers? ";
			cin >> size;

			//ptr1 points to the address of a dynamaic int array,
			//the dynamic array will be used to store the user input
			inputPtr = new int[size];

			//stores user input in a dynamic int array
			for (int i = 0; i < size; i++) {
				cout << "    Enter integer #" << i + 1 << ": ";
				cin >> *(inputPtr + i);
			}

			cout << endl;
			cout << "  The original array: " << endl;

			for (int i = 0; i < size; i++) {
				cout << "    " << *(inputPtr + i) << endl;
			}

			cout << endl;
			cout << "  Calling getUncommonDigitStatisticsMathewBuck() -"
				<< endl;
			cout << endl;
			cout << "  Displaying after returning the array -- "
				<< "The statistics:" << endl;
			cout << "    There is/are ";

			//store address of uc array in Ptr
			ucPtr = extractUncommonDigitMathewBuck(inputPtr, size);

			//if uncommon digits are identified, they are displayed
			if (*(ucPtr) != 0) {
				cout << *(ucPtr);
				cout << " uncommon digit(s) with" << endl;
				cout << endl;
				cout << "      Number of even uncommon digit(s): ";

				gusPtr = getUncommonDigitStatisticsMathewBuck(inputPtr, size);
				sizeGusPtr = gusPtr[0];

				//if evens are found
				if (gusPtr[2] % 2 == 0) {
					cout << gusPtr[1] << endl;

					indexOdd = (gusPtr[1] * 2) + 2;

					//displays even digits and occurrences
					for (int i = 2; i < indexOdd; i++) {
						cout << "        Digit " << gusPtr[i];
						cout << " occurs " << gusPtr[i + 1];
						cout << " time(s)" << endl;
						i++;
					}
					cout << endl;

					//display odds (if any)
					if (indexOdd < sizeGusPtr) {
						cout << "      Number of odd uncommon digit(s) ";
						cout << gusPtr[indexOdd] << endl;

						for (int i = indexOdd + 1; i < sizeGusPtr; i++) {
							cout << "        Digit " << gusPtr[i];
							cout << " occurs " << gusPtr[i + 1];
							cout << " time(s):" << endl;
							i++;
						}
						cout << endl;
					}
				}
	
				//if no evens are found
				else {
					cout << "0" << endl; cout << "      Number of odd uncommon digit(s) ";
					cout << gusPtr[2] << endl;
					cout << endl;

					for (int i = 2; i < sizeGusPtr; i++) {
						cout << "        Digit " << gusPtr[i];
						cout << " occurs " << gusPtr[i + 1];
						cout << " time(s):" << endl;
						i++;
					}
					cout << endl;
				}
			}

			//displays "no" if no uncommon digits were identified
			else {
				cout << "no uncommon digit(s)" << endl;
				cout << endl;
				cout << endl;
			}

			//releases the dynamic array that 
			//extractUncommonDigitMathewBuck() returned
			//delete[] ucPtr;

			//releases the dynamic array of integers that the user
			//entered
			delete[] inputPtr;
			inputPtr = nullptr;
			delete[] gusPtr;

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


int* Midterm::extractUncommonDigitMathewBuck(int input[], int size) {

	//step 1: declare 8 variables 
	int* inputPtr = input;
	int** occurPtrPtr = new int*[size];
	int* occurPtr = nullptr;
	int* returnPtr = nullptr;
	int totOccur[10] = { 0 };
	int absVal = 0;
	int totUncom = 0;
	int returnIndex = 1;

	//find and total the digit occurrences
	for (int i = 0; i < size; i++) {
		//abs value
		absVal = inputPtr[i];
		absVal = (absVal < 0) ? -absVal : absVal;

        //create new array
		occurPtr = new int[10];
		//save address
	    occurPtrPtr[i] = occurPtr;

		//initialize all elements to 0
		for (int i = 0; i < 10; i++) {
			occurPtr[i] = 0;
		}
		
		//load array with occurrences
		do {
			(occurPtr[absVal % 10])++;
			absVal /= 10;
		} while (absVal != 0);
	}

	//increment totOccur if any element is > 0
	//IE 7777 counts as 1 occurrene of 7
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 10; j++) {
			if (*(occurPtrPtr[i] + j) > 0) {
				totOccur[j]++;
			}
		}
	}

	//release occurrence arrays memory
	for (int i = 0; i < size; i++) {
		delete[] occurPtrPtr[i];
	}
	//release **array memory
	delete[] occurPtrPtr;
	occurPtr = nullptr;
	occurPtrPtr = nullptr;

	//find total uncommon digits
	for (int i = 0; i < 10; i++) {
		if (totOccur[i] == 1) {
			totUncom++;
		}
	}

	//final solution array
	returnPtr = new int[size + 1];
	returnPtr[0] = totUncom++;

	//load evens
	for (int i = 0; i < 10; i++) {
		if (totOccur[i] == 1 && i % 2 == 0) {
			returnPtr[returnIndex] = i;
			returnIndex++;
		}
	}

	//load odds
	for (int i = 0; i < 10; i++) {
		if (totOccur[i] == 1 && i % 2 != 0) {
			returnPtr[returnIndex] = i;
			returnIndex++;
		}
	}

	return returnPtr;
}


int* Midterm::getUncommonDigitStatisticsMathewBuck(int input[], int size) {

	int* inputPtr = input;
	int* uncomPtr = extractUncommonDigitMathewBuck(input, size);
	int totUncom = uncomPtr[0];
	int* retPtr = nullptr;
	int sizeRetPtr;
	int totOdd;
	int indexOdd;
	int absVal;
	int totOccur[10] = { 0 };
	int i, j;

	// if no uncommon digits found
	if (uncomPtr[0] == 0) {
		retPtr = new int[1];
		retPtr[0] = 0;
		return retPtr;
	}

	// if uncommon digits are found
	else {
		//set new array to correct size and
		//initialize to 0
		sizeRetPtr = (uncomPtr[0] * 2) + 3;
		retPtr = new int[sizeRetPtr];
		for (int i = 0; i < sizeRetPtr; i++) {
			retPtr[i] = 0;
		}

		//store size
		retPtr[0] = sizeRetPtr;

		//find total even and odd
		for (int i = 1; i < totUncom; i++) {
			if (uncomPtr[i] % 2 == 0) {
				retPtr[1]++;
			}
		}

		totOdd = totUncom - retPtr[1];
		indexOdd = (retPtr[1] * 2) + 2;
	}

	//find the total digit occurrences
	for (int i = 0; i < size; i++) {
		//abs value
		absVal = inputPtr[i];
		absVal = (absVal < 0) ? -absVal : absVal;

		//load array with occurrences
		do {
			(totOccur[absVal % 10])++;
			absVal /= 10;
		} while (absVal != 0);
	}

	//dealocate inputPtr
	delete[] inputPtr;

	//store even pairs (if any)
	if (retPtr[1] > 0) {
		for (i = 1, j = 2; j < indexOdd; i++, j++) {
			retPtr[j] = uncomPtr[i];
			retPtr[j + 1] = totOccur[uncomPtr[i]];
			j++;
		}

		//store odd pairs (if any)
		if (indexOdd < sizeRetPtr) {
			retPtr[indexOdd] = totOdd;

			for (j = indexOdd + 1; j < sizeRetPtr; i++, j++) {
				retPtr[j] = uncomPtr[i];
				retPtr[j + 1] = totOccur[uncomPtr[i]];
				j++;
			}
		}
	}

	//only odd uncommons were found
	else {
		retPtr[indexOdd] = totOdd;

		for (int i = 1, j = indexOdd + 1; j < sizeRetPtr; i++, j++) {
			retPtr[j] = uncomPtr[i];
			retPtr[j + 1] = totOccur[uncomPtr[i]];
			j++;
		}
	}

	delete[] uncomPtr;

	///////////////////////////////////////////////////////////

	cout << endl << endl << endl;
	for (int i = 0; i < sizeRetPtr; i++) {
		cout << retPtr[i];
	}
	cout << endl << endl << endl;
	///////////////////////////////////////////////////////////

	return retPtr;
}
