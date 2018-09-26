/*
Program Name:   mtPractice
Discussion:     
Written By:     Mathew Buck
Date: 
*/

#include <iostream>
using namespace std;

//function prototypes//////////////////////////////////

void menu(void);

int* extractUncommonDigits(int input[], int size);

int* getUncommonDigitsStats(int input[], int size);

//driver//////////////////////////////////////////////

int main() {

	menu();

	return 0;
}

//function definitions///////////////////////////////

void menu() {

	int* inputPtr = nullptr;
	int* outputPtr = nullptr;
	int option;
	int size;
	int i;
	int* uncomPtr = nullptr;

	do {

		cout << "*************************************************" << endl;
		cout << "*                  Menu                         *" << endl;
		cout << "*  1.  Extract Uncommon Digit                   *" << endl;
		cout << "*  2.  Get Uncommon Stats                       *" << endl;
		cout << "*  3.  End Program                              *" << endl;
		cout << "*************************************************" << endl;
		cout << "Select an option (1,2 or 3): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:

			cout << " How many integers? ";
			cin >> size;

			inputPtr = new int[size];  //memory deleted at 

			for (i = 0; i < size; i++) {
				cout << "  Enter integer #" << i + 1 << ": ";
				cin >> inputPtr[i];
			}

			cout << endl;
			cout << "The original array: " << endl;

			for (i = 0; i < size; i++) {
				cout << "    " << inputPtr[i] << endl;
			}

			cout << endl;
			cout << " Calling extractUncommonDigit()  " << endl;
			cout << endl;
			cout << "The uncommon digits is/are: " << endl;

			outputPtr = extractUncommonDigits(inputPtr, size);

			if (outputPtr[0] != 0) {
				cout << outputPtr[0];
				cout << " uncommon digit(s)" << endl;

				for (i = 0; i < outputPtr[0]; i++) {
					cout << "    " << outputPtr[i + 1] << endl;
				}

				cout << endl;
				cout << endl;
			}

			delete[] inputPtr;
			delete[] outputPtr;

			break;

		case 2:

			cout << "  How many integers? ";
			cin >> size;
			cout << endl;

			inputPtr = new int[size];  

			for (i = 0; i < size; i++) {
				cout << "  Enter integer #" << i + 1 << ": ";
				cin >> inputPtr[i];
			}

			cout << endl;
			cout << "  The original array: " << endl;

			for (i = 0; i < size; i++) {
				cout << "    " << inputPtr[i] << endl;
			}

			cout << endl;
			cout << "  Getting uncommon digit stats  " << endl;
			cout << endl;
			cout << "  There is/are ";

			uncomPtr = extractUncommonDigits(inputPtr, size);
			outputPtr = getUncommonDigitsStats(inputPtr, size);

			if (outputPtr != 0) {
				cout << uncomPtr[0];
				cout << " uncommon digit(s)" << endl;

				for (i = 0; i < outputPtr[0]; i++) {
					cout << "    " << outputPtr[i] << endl;
				}

				cout << endl;
				cout << endl;
			}

			else {
				cout << "0";
			}

			delete[] outputPtr;

			break;

		case 3:

			cout << "  Ending program.";
			cout << endl << endl;

			break;

		default:

			cout << "  Wrong option!" << endl << endl;

			break;
		}

	} while (option != 3);
}


int* extractUncommonDigits(int input[], int size) {

	//initialize all resources
	int* inputPtr = input;
	int** occurPtrPtr = nullptr;
	int* occurPtr = nullptr;
	int* returnPtr = nullptr;
	int totOccur[10] = { 0 };
	int absVal = 0;
	int totUncom = 0;
	int returnIndex = 1;

	occurPtrPtr = new int*[size];

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
	returnPtr = new int[totUncom + 1];
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


int* getUncommonDigitsStats(int input[], int size) {

	//initialize all resources
	int* inputPtr = input;
	int* outputPtr = nullptr;
	int* uncomPtr = nullptr;
	int totOccur[10] = { 0 };
	int totEven = 0;
	int totOdd = 0;
	int totUncom = 0;
	int absVal = 0;
	int sizeOutput = 0;
	int indexTotOdd = 0;
	int i, j = 0;

	uncomPtr = extractUncommonDigits(input, size);
	totUncom = uncomPtr[0];

	//case 1: no uncommon digits found
	if (uncomPtr[0] == 0) {

		outputPtr = new int[3];
		outputPtr[0] = 3; //size
		outputPtr[1] = 0; //evens
		outputPtr[2] = 0; //odds

		return outputPtr;
	}

	//find total evens and odds and idex of totodds
	else {

		for (int i = 1; i < totUncom + 1; i++) {
			if (uncomPtr[i] % 2 == 0) {
				totEven++;
			}
			else {
				totOdd++;
			}
		}

		indexTotOdd = (2 * totEven) + 2;
	}

	//find total occurrences
	for (int i = 0; i < size; i++) {
		
		absVal = inputPtr[i];
		absVal = (absVal < 0) ? -absVal : absVal;

		do {
			totOccur[absVal % 10]++;
			absVal /= 10;
		} while (absVal != 0);
	}

	sizeOutput = (totUncom * 2) + 3;
	outputPtr = new int[sizeOutput];

	//case 2: only evens found
	if (totOdd == 0) {
		outputPtr[0] = sizeOutput;  //first element = size
		outputPtr[1] = totEven; //second element = total evens
		outputPtr[indexTotOdd] = totOdd; //last element = tot odds (0)

		for (int i = 2, j = 1; i < indexTotOdd; i++, j++) {
			outputPtr[i] = uncomPtr[j];
			outputPtr[i + 1] = totOccur[uncomPtr[j]];
			i++;
		}
	}

	//case 3:  only odds found
	else if (totEven == 0) {
		outputPtr[0] = sizeOutput;  //first element = size
		outputPtr[1] = totEven; //second element = total evens
		outputPtr[indexTotOdd] = totOdd; //third element = total odds

		for (int i = 3, j = 1; i < sizeOutput; i++, j++) {
			outputPtr[i] = uncomPtr[j];
			outputPtr[i + 1] = totOccur[uncomPtr[j]];
			i++;
		}
	}

	//case 4:  evens and odds found
	else {

		outputPtr[0] = sizeOutput;  //first element = size
		outputPtr[1] = totEven; //second element = total evens
		outputPtr[indexTotOdd] = totOdd;

		for (i = 2, j = 1; i < indexTotOdd; i++, j++) {
			outputPtr[i] = uncomPtr[j];
			outputPtr[i + 1] = totOccur[uncomPtr[j]];
			i++;
		}
		 
		for (i = indexTotOdd + 1; i < sizeOutput; i++, j++) {
			outputPtr[i] = uncomPtr[j];
			outputPtr[i + 1] = totOccur[uncomPtr[j]];
			i++;
		}
	}

	delete[] uncomPtr;

	return outputPtr;

}