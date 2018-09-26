/*
Program Name:  PointMattBUtility.cpp
Discussion:    Source File
               Utility for use with PointMattB class
Written By:    Mathew Buck
Date:          2016/04/28
*/

#include "FractionMattB.h"
#include "PointMattB.h"
#include <iostream>
#include "PointMattBUtility.h"
using namespace std;

//------------------------------------------------------
//Function Definitions////////////////////////////////
//-----------------------------------------------------

void menu() {

	int option = 0;
	int m = 0;
	int f = 0;
	int x = 0;
	int y = 0;
	int xy = 0;
	PointMattB* pPtr = nullptr;
	FractionMattB frX;
	FractionMattB frY;

	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Mathew Buck" << endl << endl;
	cout << "Assignment Information --" << endl;
	cout << "  Assignment Number:  Homework 06," << endl;
	cout << "                      Exercise #1" << endl;
	cout << "  Written by:         Mathew Buck" << endl;
	cout << "  Due Date:           2016/04/28" << endl;
	cout << endl;

	do {
		cout << "********************" << endl;
		cout << "*   MENU Point     *" << endl;
		cout << "*  1. Initializing *" << endl;
		cout << "*  2. Moving       *" << endl;
		cout << "*  3. Flipping     *" << endl;
		cout << "*  4. Printing     *" << endl;
		cout << "*  5. Quitting     *" << endl;
		cout << "********************" << endl;
		cout << "Select an option (use integer value only): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:

			if (pPtr == nullptr) {

				cout << "  Initializing Option --" << endl << endl;
				cout << "    Enter x coordinate: ";
				cin >> x;
				cout << endl;
				cout << "    Enter y coordinate: ";
				cin >> y;
				cout << endl;

				pPtr = new PointMattB(x, y);

				cout << "  Your point is ";
				pPtr->print();
				cout << endl;
			}
			 
			else {

				update(&pPtr);

				cout << "    Your new point is ";
				pPtr->print();
				cout << endl;
			}

			break;

		case 2:

			if (pPtr == nullptr) {
				cout << "    Not a proper call as no Points are available!"
					<< endl << endl;

				break;
			}

			cout << "  Moving Option --" << endl << endl;

			do {
				cout << "    *************************" << endl;
				cout << "    *     MENU MovingPoint  *" << endl;
				cout << "    *  1. By (frX, frY)     *" << endl;
				cout << "    *  2. By fr             *" << endl;
				cout << "    *  3. By int            *" << endl;
				cout << "    *  4. Printing          *" << endl;
				cout << "    *  5. Returning         *" << endl;
				cout << "    *************************" << endl;
				cout << "    Select an option (use integer value only): ";
				cin >> m;
				cout << endl;

				switch (m) {

				case 1:

					cout << "      Moving by frX and frY:" << endl << endl;
					cout << "      How far do you want to move the x coordinate (pos or neg)? ";
					cin >> x;
					frX.setNum(x);
					cout << endl;
					cout << "      How far do you want to move the y coordinate (pos or neg)? ";
					cin >> y;
					frY.setNum(y);
					cout << endl;
					pPtr->moveBy(frX, frY);
					cout << "      Your point moved to ";
					pPtr->print();
					cout << endl;

					break;

				case 2:

					cout << "      Moving by fraction:" << endl << endl;
					cout << "      How far do you want to move your point? (pos or neg)? ";
					cin >> xy;
					frX.setNum(xy);

					pPtr->moveBy(frX);
					cout << endl;
					cout << "      Your point moved to ";
					pPtr->print();
					cout << endl;

					break;

				case 3:

					cout << "       Moving by int: " << endl << endl;
					cout << "       How far do you want to move your point? (pos or neg)? ";
					cin >> xy;
					pPtr->moveBy(xy);
					cout << endl;
					cout << "      Your point moved to ";
					pPtr->print();
					cout << endl;

				case 4:

					cout << "      Printing:" << endl << endl;
					cout << "      Your point is ";
					pPtr->print();
					cout << endl;

					break;

				case 5:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (m != 5);

			break;

		case 3:

			if (pPtr == nullptr) {
				cout << "    Not a proper call as no Points are available!"
					<< endl << endl;

				break;
			}

			cout << "  Flipping Option --" << endl << endl;

			do {
				cout << "    *************************" << endl;
				cout << "    *    MENU FlippingPoint *" << endl;
				cout << "    *  1. By Y              *" << endl;
				cout << "    *  2. By X              *" << endl;
				cout << "    *  3. By Origen         *" << endl;
				cout << "    *  4. Printing          *" << endl;
				cout << "    *  5. Returning         *" << endl;
				cout << "    *************************" << endl;
				cout << "    Select an option (use interger value only): ";
				cin >> f;
				cout << endl;

				switch (f) {

				case 1:

					cout << "      Flipping By Y:" << endl;
					pPtr->flipByY();
					cout << endl;
					cout << "      Your point moved to ";
					pPtr->print();
					cout << endl;

					break;

				case 2:

					cout << "      Flipping By X:" << endl;
					pPtr->flipByX();
					cout << endl;
					cout << "      Your point moved to ";
					pPtr->print();
					cout << endl;

					break;

				case 3:

					cout << "      Flipping Through Origin:" << endl;
					pPtr->flipThroughOrigin();
					cout << endl;
					cout << "      Your point moved to ";
					pPtr->print();
					cout << endl;

					break;

				case 4:

					cout << "      Printing:" << endl << endl;
					cout << "      Your point is ";
					pPtr->print();
					cout << endl;

					break;

				case 5:

					break;

				default:

					cout << "      Wrong Option!" << endl << endl;
				}

			} while (f != 5);

			break;

		case 4:

			if (pPtr == nullptr) {
				cout << "    Not a proper call as no Points are available!"
					<< endl << endl;

				break;
			}

			cout << "  Printing Option --" << endl << endl;
			cout << "      Print function-- ";
			cout << "Your point is: ";
			pPtr->print();
			cout << endl;

			cout << "      Operator << overload-- ";
			cout << "Your point is: ";
			cout << *pPtr;
			cout << endl;

			break;

		case 5:

			break;

		default:

			cout << "    Not a proper call!"
				<< endl << endl;
		}

	} while (option != 5);

	cout << "  Having fun ...!" << endl << endl;

	delete pPtr;
	pPtr = nullptr;
}

void update(PointMattB** pPtrPtr) {
	int x = 0;
	int y = 0;

	cout << "    Enter new x coordinate: ";
	cin >> x;
	cout << endl;
	cout << "    Enter new  y coordinate: ";
	cin >> y;
	cout << endl;

	(*pPtrPtr)->setX(x);
	(*pPtrPtr)->setY(y);
}