/*
Program Name:   mtPractice
Discussion:     
Written By:     Mathew Buck
Date: 
*/

#include <iostream>
using namespace std;

//function prototypes//////////////////////////////////////////////

void menu(void);

int* extractUncommonDigits(int input[], int size);

int* getUncommonDigitsStats(int input[], int size);

//driver////////////////////////////////////////////////////////////

int main() {

	menu();

	return 0;
}

//function definitions

void menu() {

	int* inputPtr = nullptr;
	int* outPutPtr = nullptr;
	int option;
	int size;
	int i;

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
			cout << endl;
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

			outPutPtr = extractUncommonDigits(inputPtr, size);

			if (outPutPtr != 0) {
				cout << outPutPtr[0];
				cout << " uncommon digit(s)" << endl;

				for (i = 0; i < outPutPtr[0]; i++) {
					cout << "    " << outPutPtr[i + 1] << endl;
				}

				cout << endl;
				cout << endl;
			}

			delete[] outPutPtr;
			delete[] inputPtr;

			break;

		case 2:

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

			outPutPtr = getUncommonDigitsStats(inputPtr, size);

			if (outPutPtr != 0) {
				cout << outPutPtr[0];
				cout << " uncommon digit(s)" << endl;

				for (i = 0; i < outPutPtr[0]; i++) {
					cout << "    " << outPutPtr[i + 1] << endl;
				}

				cout << endl;
				cout << endl;
			}

			delete[] outPutPtr;
			delete[] inputPtr;

			break;

		case 3:

			cout << "  Ending program.";
			cout << endl << endl;

		default:

			cout << "  Wrong option!" << endl << endl;

			break;
		}

	} while (option != 3);
}

//////////////////////////////////////////////////////////////////////////////////////
int* extractUncommonDigits(int input[], int size) {

			return input;
		}

///////////////////////////////////////////////////////////////////////////////////
int* getUncommonDigitsStats(int input[], int size) {

	return input;
}