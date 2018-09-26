/*
Program Name:  FractionMattBUtility.cpp
Discussion:    Source File 
               Utility for use with FractionMattB class
Written By:    Mathew Buck
Date:          2016/04/14
*/

#include "FractionMattB.h"
#include <iostream>
#include "FractionMattBUtility.h"
using namespace std;

//------------------------------------------------------
//Function Definitions////////////////////////////////
//------------------------------------------------------

void inIt(FractionMattB** lPtrPtr, FractionMattB** rPtrPtr) {
	int n = 0;
	int d = 1;
	int u = 0;

	if (*lPtrPtr == nullptr) {
		cout << "    Enter numerator of left fraction.  ";
		cin >> n;
		cout << endl;
		do {
			cout << "    Enter denominator of left fraction (not 0).  ";
			cin >> d;
		} while (d == 0);
		cout << endl;

		*lPtrPtr = new FractionMattB(n, d);
	}

	if (*rPtrPtr == nullptr) {
		cout << "    Enter numerator of right fraction.  ";
		cin >> n;
		cout << endl;
		do {
			cout << "    Enter denominator of right fraction (not 0).  ";
			cin >> d;
		} while (d == 0);
		cout << endl;

		*rPtrPtr = new FractionMattB(n, d);
	}

	else {

		cout << "      Your fractions are: " << endl << endl; cout << "          ";
		(*lPtrPtr)->print();
		cout << "  &  ";
		(*rPtrPtr)->print();
		cout << "         " << endl << endl;
		cout << "  *******************************" << endl;
		cout << "  *            Menu             *" << endl;
		cout << "  *                             *" << endl; 
		cout << "  *  1. Update left fraction    *" << endl;
		cout << "  *  2. Update right fraction   *" << endl;
		cout << "  *  3. Update both fractions   *" << endl;
		cout << "  *  4. Return to previous menu *" << endl;
		cout << "  *                             *" << endl;
		cout << "  *******************************" << endl;
		cout << "  Select an option (use integer value only): ";
		cin >> u;
		cout << endl;
		
		switch (u) {

		 case 1:

			 cout << "    Enter numerator of left fraction.  ";
			 cin >> n;
			 cout << endl;
			 do {
				 cout << "    Enter denominator of left fraction (not 0).  ";
				 cin >> d;
			 } while (d == 0);
			 cout << endl;

			 (*lPtrPtr)->setNum(n);
			 (*lPtrPtr)->setDenom(d);
			 (*lPtrPtr)->lowestTerms(); 
			 
			 cout << "      Your fractions are: " << endl << endl; cout << "          ";
			 (*lPtrPtr)->print();
			 cout << "  &  ";
			 (*rPtrPtr)->print();
			 cout << "         " << endl << endl;

			 break;
			 
		 case 2:

			 cout << "    Enter numerator of right fraction.  ";
			 cin >> n;
			 cout << endl;
			 do {
				 cout << "    Enter denominator of right fraction (not 0).  ";
				 cin >> d;
			 } while (d == 0);
			 cout << endl;

			 (*rPtrPtr)->setNum(n);
			 (*rPtrPtr)->setDenom(d);
			 (*rPtrPtr)->lowestTerms();

			 cout << "      Your fractions are: " << endl << endl; cout << "          ";
			 (*lPtrPtr)->print();
			 cout << "  &  ";
			 (*rPtrPtr)->print();
			 cout << "         " << endl << endl;

			 break;

		 case 3:

			 cout << "    Enter numerator of left fraction.  ";
			 cin >> n;
			 cout << endl;
			 do {
				 cout << "    Enter denominator of left fraction (not 0).  ";
				 cin >> d;
			 } while (d == 0);
			 cout << endl;

			 (*lPtrPtr)->setNum(n);
			 (*lPtrPtr)->setDenom(d);
			 (*lPtrPtr)->lowestTerms();

			 cout << "    Enter num of right fraction.  ";
			 cin >> n;
			 cout << endl;
			 do {
				 cout << "    Enter denom of right fraction (not 0).  ";
				 cin >> d;
			 } while (d == 0);
			 cout << endl;

			 (*rPtrPtr)->setNum(n);
			 (*rPtrPtr)->setDenom(d);
			 (*rPtrPtr)->lowestTerms();

			 cout << "      Your fractions are: " << endl << endl; cout << "          ";
			 (*lPtrPtr)->print();
			 cout << "  &  ";
			 (*rPtrPtr)->print();
			 cout << "         " << endl << endl;

			 break;

		 case 4:

			 break;

		 default:

			 cout << "      Wrong option. Try again." << endl;
			 cout << endl;
			 break;
		 }
	}
}

FractionMattB add(const FractionMattB& lF, const FractionMattB& rF) {

	FractionMattB l = lF;
	FractionMattB r = rF;
	FractionMattB res = l + r;

	return res;
}

FractionMattB subtract(const FractionMattB& lF, const FractionMattB& rF) {

	FractionMattB l = lF;
	FractionMattB r = rF;
	FractionMattB res = l - r;

	return res;
}

FractionMattB multiply(const FractionMattB& lF, const FractionMattB& rF) {

	FractionMattB l = lF;
	FractionMattB r = rF;
	FractionMattB res = l * r;

	return res;
}


FractionMattB divide(const FractionMattB& lF, const FractionMattB& rF) {

	FractionMattB l = lF;
	FractionMattB r = rF;
	FractionMattB res = l / r;

	return res;
}

void print(const FractionMattB& lF, const FractionMattB& rF, const FractionMattB& resF) {

	FractionMattB l = lF;
	FractionMattB r = rF;

	if (&resF == nullptr) {

		cout << "    Left Frac ";
		l.print();
		cout << ", Right Frac ";
		r.print();
		cout << ", Result Frac is Null.";
		cout << endl;
		cout << endl;
	}

	else {

		FractionMattB res = resF;

		cout << "    Left Frac ";
		l.print();
		cout << ", Right Frac ";
		r.print();
		cout << ", Result Frac ";
		res.print();
		cout << endl;
		cout << endl;
	}
}

void menu(void) {

	int option = 0;
	int num = 0;
	int denom = 1;
	FractionMattB* lPtr = nullptr;
	FractionMattB* rPtr = nullptr;
	FractionMattB* resPtr = nullptr;
	int p = 0;

	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Mathew Buck" << endl << endl;
	cout << "Assignment Information --" << endl;
	cout << "  Assignment Number:  Homework 04," << endl;
	cout << "                      Exercise #1" << endl;
	cout << "  Written by:         Mathew Buck" << endl;
	cout << "  Due Date:           2016/04/14" << endl;
	cout << endl;

	do {
		cout << "********************" << endl;
		cout << "*       Menu       *" << endl;
		cout << "*                  *" << endl;
		cout << "*  1. Initializing *" << endl;
		cout << "*  2. Adding       *" << endl;
		cout << "*  3. Subtracting  *" << endl;
		cout << "*  4. Multiplying  *" << endl;
		cout << "*  5. Dividing     *" << endl;
		cout << "*  6. Printing     *" << endl;
		cout << "*  7. Quit         *" << endl;
		cout << "********************" << endl;
		cout << "Select an option (use integer value only): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:

			cout << "  Initializing Option --" << endl << endl;

			inIt(&lPtr, &rPtr);
			
			break;

		case 2:

			cout << "  Adding Option --" << endl << endl;

			if (lPtr == nullptr) {
				cout << "    Not a proper call as no Fractions are available!" << endl;
				cout << endl;
				break;
			}

			if (resPtr == nullptr) {

				resPtr = new FractionMattB();
			}

			do {
				cout << "    ********************************" << endl;
				cout << "    *         Adding Menu          *" << endl;
				cout << "    *                              *" << endl;
				cout << "    *  1. add() - Member           *" << endl;
				cout << "    *  2. add() - Stand Alone      *" << endl;
				cout << "    *  3. operator+() - Member     *" << endl;
				cout << "    *  4. Return to Previous MENU  *" << endl;
				cout << "    ********************************" << endl;
				cout << "    Select an option (1, 2, 3, or 4): ";
				cin >> p;
				cout << endl;

				switch (p) {

				case 1:
					
					cout << "      Calling member add()" << endl << endl;
					*resPtr = (lPtr)->add(*rPtr);

					break;

				case 2:

					cout << "      Calling stand alone add()" << endl << endl;
					*resPtr = add(*lPtr, *rPtr);

					break;

				case 3:

					cout << "      Calling member operator+()" << endl << endl;
					*resPtr = (*lPtr) + (*rPtr);

					break;

				case 4:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (p != 4);

			cout << "    ";
			lPtr->print();
			cout << " + ";
			rPtr->print();
			cout << " = ";
			resPtr->print();
			cout << endl;
			cout << endl;
			
			break;

		case 3:
			
			cout << "  Subtracting Option --" << endl << endl;

			if (lPtr == nullptr) {
				cout << "    Not a proper call as no Fractions are available!" << endl;
				cout << endl;
				break;
			}

			if (resPtr == nullptr) {

				resPtr = new FractionMattB();
			}

			do {
				cout << "    ********************************" << endl;
				cout << "    *      Subtracting  Menu       *" << endl;
				cout << "    *                              *" << endl;
				cout << "    *  1. subtract() - Member      *" << endl;
				cout << "    *  2. subract() - Stand Alone  *" << endl;
				cout << "    *  3. operator-() - Member     *" << endl;
				cout << "    *  4. Return to Previous MENU  *" << endl;
				cout << "    ********************************" << endl;
				cout << "    Select an option (1, 2, 3, or 4): ";
				cin >> p;
				cout << endl;

				switch (p) {

				case 1:

					cout << "      Calling member subtract()" << endl << endl;
					*resPtr = (lPtr)->subtract(*rPtr);

					break;

				case 2:

					cout << "      Calling stand alone subtract()" << endl << endl;
					*resPtr = subtract(*lPtr, *rPtr);

					break;

				case 3:

					cout << "      Calling member operator-()" << endl << endl;
					*resPtr = (*lPtr) - (*rPtr);

					break;

				case 4:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (p != 4);

			cout << "    ";
			lPtr->print();
			cout << " - ";
			rPtr->print();
			cout << " = ";
			resPtr->print();
			cout << endl;
			cout << endl;

			break;

		case 4:

			cout << "  Multiplying Option --" << endl << endl;

			if (lPtr == nullptr) {
				cout << "    Not a proper call as no Fractions are available!" << endl;
				cout << endl;
				break;
			}

			if (resPtr == nullptr) {

				resPtr = new FractionMattB();
			}

			do {
				cout << "    ********************************" << endl;
				cout << "    *      Multiplying  Menu       *" << endl;
				cout << "    *                              *" << endl;
				cout << "    *  1. multiply() - Member      *" << endl;
				cout << "    *  2. multiply() - Stand Alone *" << endl;
				cout << "    *  3. operator*() - Member     *" << endl;
				cout << "    *  4. Return to Previous MENU  *" << endl;
				cout << "    ********************************" << endl;
				cout << "    Select an option (1, 2, 3, or 4): ";
				cin >> p;
				cout << endl;

				switch (p) {

				case 1:

					cout << "      Calling member multiply()" << endl << endl;
					*resPtr = (lPtr)->multiply(*rPtr);

					break;

				case 2:

					cout << "      Calling stand alone multiply()" << endl << endl;
					*resPtr = multiply(*lPtr, *rPtr);

					break;

				case 3:

					cout << "      Calling member operator*()" << endl << endl;
					*resPtr = (*lPtr) * (*rPtr);

					break;

				case 4:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (p != 4);

			cout << "    ";
			lPtr->print();
			cout << " * ";
			rPtr->print();
			cout << " = ";
			resPtr->print();
			cout << endl;
			cout << endl;

			break;

		case 5:

			cout << "  Dividing Option --" << endl << endl;

			if (lPtr == nullptr) {
				cout << "    Not a proper call as no Fractions are available!" << endl;
				cout << endl;
				break;
			}	

			if (resPtr == nullptr) {

				resPtr = new FractionMattB();
			}

			do {
				cout << "    ********************************" << endl;
				cout << "    *       Dividing Menu          *" << endl;
				cout << "    *                              *" << endl;
				cout << "    *  1. divide() - Member        *" << endl;
				cout << "    *  2. divide() - Stand Alone   *" << endl;
				cout << "    *  3. operator/() - Member     *" << endl;
				cout << "    *  4. Return to Previous MENU  *" << endl;
				cout << "    ********************************" << endl;
				cout << "    Select an option (1, 2, 3, or 4): ";
				cin >> p;
				cout << endl;

				switch (p) {

				case 1:

					cout << "      Calling member divide()" << endl << endl;
					*resPtr = (lPtr)->divide(*rPtr);

					break;

				case 2:

					cout << "      Calling stand alone divide()" << endl << endl;
					*resPtr = divide(*lPtr, *rPtr);

					break;

				case 3:

					cout << "      Calling member operator/()" << endl << endl;
					*resPtr = (*lPtr) / (*rPtr);

					break;

				case 4:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (p != 4);

			cout << "    ";
			lPtr->print();
			cout << " / ";
			rPtr->print();
			cout << " = ";
			resPtr->print();
			cout << endl;
			cout << endl;

			break;

		case 6:

			cout << "  Printing Option --" << endl << endl;

			if (rPtr == nullptr) {
				cout << "    Not a proper call as no Fractions are available!" << endl;
				cout << endl;
				break;
			}

			do {
				cout << "    ********************************" << endl;
				cout << "    *       Printing Menu          *" << endl;
				cout << "    *                              *" << endl;
				cout << "    *  (leftOp, rightOp, result)   *" << endl;
				cout << "    *  1. print() - Member         *" << endl;
				cout << "    *  2. print() - Stand Alone    *" << endl;
				cout << "    *  3. ostream << - Stand Alone *" << endl;
				cout << "    *  4. Return to Previous MENU  *" << endl;
				cout << "    ********************************" << endl;
				cout << "    Select an option (1, 2, 3, or 4): ";
				cin >> p;
				cout << endl;

				switch (p) {

				case 1:

					if (resPtr == nullptr) {

						cout << "    Left Frac ";
						lPtr->print();
						cout << ", Right Frac ";
						rPtr->print();
						cout << ", Result Frac is Null.";
						cout << endl;
						cout << endl;
					}

					else {
						
						cout << "    Left Frac ";
						lPtr->print();
						cout << ", Right Frac ";
						rPtr->print();
						cout << ", Result Frac ";
						resPtr->print();
						cout << endl;
						cout << endl;
					}

					

					break;

				case 2:

					print(*lPtr, *rPtr, *resPtr);

					break;

				case 3:

					if (resPtr == nullptr) {

						cout << "    Left Frac ";
						cout << lPtr->getNum() << "/" << lPtr->getDenom();
						cout << ", Right Frac ";
						cout << rPtr->getNum() << "/" << rPtr->getDenom();
						cout << ", Result Frac is Null.";
						cout << endl;
						cout << endl;
					}

					else {

						cout << "    Left Frac ";
						cout << lPtr->getNum() << "/" << lPtr->getDenom();
						cout << ", Right Frac ";
						cout << rPtr->getNum() << "/" << rPtr->getDenom();
						cout << ", Result Frac ";
						cout << resPtr->getNum() << "/" << resPtr->getDenom();
						cout << endl;
						cout << endl;
					}
					

					break;

				case 4:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (p != 4);

			break;

		case 7:

			break;

		default:

			cout << "    Not a proper call as no Fractions are available!"
				<< endl << endl;
		}

	} while (option != 7);

	cout << "  Having fun ...!" << endl << endl;

	delete lPtr;
	delete rPtr;
  delete resPtr;
}
