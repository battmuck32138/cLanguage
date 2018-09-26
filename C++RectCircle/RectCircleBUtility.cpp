/*
Program Name:  RectCircleBUtility.cpp
Discussion:    Source File
			   Utility for use with Rectangle and Circle classes
Written By:    Mathew Buck
*/

#include "RectCircleUtility.h"
#include "CircleMattB.h"
#include "RectangleMattB.h"
#include "FractionMattB.h"
#include "PointMattB.h"
#include <iostream>
using namespace std;

//------------------------------------------------------
//Function Definitions////////////////////////////////
//-----------------------------------------------------


void menu() {

	int option = 0;
	int rm = 0;
	int cm = 0;
	int rcm = 0;
	int num = 0;
	int denom = 0;
	int number = 2;
	FractionMattB result;
	RectangleMattB** rPtrPtr = nullptr;
	RectangleMattB* rPtr = nullptr;
	CircleMattB** cPtrPtr = nullptr;
	CircleMattB* cPtr = nullptr;

	/////////////////test only///////////////////////////
	PointMattB ur1 = PointMattB(16, 9);
	PointMattB ll1 = PointMattB(10, 3);
	PointMattB ur2 = PointMattB(13, 6);
	PointMattB ll2 = PointMattB(12, 5);
	PointMattB ur3 = PointMattB(5, 8);
	PointMattB ll3 = PointMattB(-4, -2);
	PointMattB ur4 = PointMattB(6, 4);
	PointMattB ll4 = PointMattB(2, 2);
	RectangleMattB r1 = RectangleMattB(ur1, ll1);
	RectangleMattB r2 = RectangleMattB(ur2, ll2);
	RectangleMattB r3 = RectangleMattB(ur3, ll3);
	RectangleMattB r4 = RectangleMattB(ur4, ll4);
	RectangleMattB rectArray[4]{ r1, r2, r3, r4 };
	PointMattB c1 = PointMattB(-3, 3);
	PointMattB c2 = PointMattB(-1, 5);
	PointMattB c3 = PointMattB(2, 4);
	PointMattB c4 = PointMattB(7, -2);
	CircleMattB circle1 = CircleMattB(c1, FractionMattB(5, 1));
	CircleMattB circle2 = CircleMattB(c2, FractionMattB(2, 1));
	CircleMattB circle3 = CircleMattB(c3, FractionMattB(3, 1));
	CircleMattB circle4 = CircleMattB(c4, FractionMattB(4, 1));
	CircleMattB circArray[4]{ circle1, circle2, circle3, circle4 };

	for (int i = 0; i < 4; i++) {
		cout << circArray[i] << endl << endl;
	}

	cout << "distance from center to center is: ";
	cout << circArray[0].distCenter(circArray[1].getC());
	cout << endl << endl;

	if (circArray[2].isContainedCircle(circArray[3])) {
		cout << "Circle is contained!" << endl << endl;
	}
	else {
		cout << "No circles contained!" << endl << endl;
	}

	cout << "The circumferance of the circle is: ";
	cout << circArray[0].getCircum() << endl << endl;

	cout << "Calling getContainedCircle() " << endl << endl;
	cout << getContainedCircle(circArray, 4) << endl << endl;


	/////////////////////////////////////////////////////////////

	cout << "CIS 25 - C++ Programming" << endl;
	cout << "Laney College" << endl;
	cout << "Mathew Buck" << endl << endl;
	cout << "Assignment Information --" << endl;
	cout << "  Assignment Number:  Homework 7," << endl;
	cout << "                      Exercise #1" << endl;
	cout << "  Written by:         Mathew Buck" << endl;
	cout << "  Due Date:           2016/05/12" << endl;
	cout << endl;

	do {
		cout << "MAIN MENU" << endl;
		cout << "(1) Rectangel Tasks" << endl;
		cout << "(2) Circle Tasks" << endl;
		cout << "(3) Mixed Rectangle & Circle Tasks" << endl;
		cout << "(4) Quit" << endl;
		cout << endl;
		cout << "Enter your option (1, 2, 3, or 4): ";
		cin >> option;
		cout << endl;

		switch (option) {

		case 1:

			do {
				cout << "RECTANGLE MENU" << endl;
				cout << "1. Create two Rectangle objects" << endl;
				cout << "2. Compare by volume" << endl;
				cout << "3. Compare by area" << endl;
				cout << "4. TEST FINAL EXAM FUNCTIONS / Print two Rectangle objects" << endl;
				cout << "5. Quit" << endl << endl;
				cout << "Enter your option (between 1 through 5) : ";
				cin >> rm;
				cout << endl;


				if (rPtr == nullptr && rm != 1) {
					cout << "  Must create rectangles first!" << endl << endl;
					rm = 9;
				}

				switch (rm) {

				case 1:

					if (rPtr == nullptr) {
						rPtrPtr = new RectangleMattB*[number];

						for (int i = 0; i < number; i++) {
							rPtr = new RectangleMattB();
							rPtrPtr[i] = rPtr;
						}
					}

					for (int i = 0; i < number; i++) {
						cout << "  Enter the x coordinate of the upper right point as a fraction. "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						rPtrPtr[i]->setURX(num, denom);

						cout << endl;
						cout << "  Enter the y coordinate of the upper right point as a fraction: "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						rPtrPtr[i]->setURY(num, denom);

						cout << endl;
						cout << "  Enter the x coordinate of the lower left point as a fraction. "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						rPtrPtr[i]->setLLX(num, denom);

						cout << endl;
						cout << "  Enter the y coordinate of the upper right point as a fraction: "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						rPtrPtr[i]->setLLY(num, denom);

						cout << endl;
						cout << "    Rectangle #" << i + 1 << ": " << *rPtrPtr[i];
						cout << endl << endl;
					}

					break;

				case 2:

					for (int i = 0; i < number; i++) {
						cout << "    Volume of Rectange #" << i + 1 << ": ";
						cout << rPtrPtr[i]->getVolume() << " cubic untits"
							<< endl << endl;
					}

					if (rPtrPtr[0]->getVolume() == rPtrPtr[1]->getVolume()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = rPtrPtr[0]->getVolume() - rPtrPtr[1]->getVolume();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					break;

				case 3:

					for (int i = 0; i < number; i++) {
						cout << "    Area of Rectange #" << i + 1 << ": ";
						cout << rPtrPtr[i]->getArea() << " square units"
							<< endl << endl;
					}

					if (rPtrPtr[0]->getArea() == rPtrPtr[1]->getArea()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = rPtrPtr[0]->getArea() - rPtrPtr[1]->getArea();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					break;

				case 4:

					//to print objects
					for (int i = 0; i < number; i++) {
						cout << "    Rectange #" << i + 1 << ": ";
						rPtrPtr[i]->print();
						cout << endl << endl;
					}

					//TEST FINAL EXAM FUNCTIONS/////////////////////////////////////////////////
					//to simplify code for test only
					r1 = *rPtrPtr[0];
					r2 = *rPtrPtr[1];

					if (r1.isContainedRect(r2)) {
						if (r1.getArea() > r2.getArea()) {
							cout << "R2 IS CONTAINED WITHIN R1" << endl << endl;
						}

						else {
							cout << "R1 IS CONTAINED WITHING R2" << endl << endl;
						}
					}

					else {
						cout << "NO RECTANGLES CONTAINED!" << endl << endl;
					}

					cout << "THE PERIMETER OF R1 IS: ";
					cout << r1.getPerimeterRect();
					cout << endl << endl;
					cout << "THE PERIMETER OF R2 IS: ";
					cout << r2.getPerimeterRect();
					cout << endl << endl;

					cout << "The shortest distence beteen objects is: ";
					cout << r1.shortestDist(r2);
					cout << endl << endl;

					cout << getContainedRect(rectArray, 4) << endl << endl;

					////TEST FINAL EXAM FUNCTIONS///////////////////////////////////////////////////

					break;

				case 5:

					break;

				default:

					cout << "    Not a proper call!"
						<< endl << endl;

					break;
				}

			} while (rm != 5);

			break;

		case 2:

			do {
				cout << "CIRCLE MENU" << endl;
				cout << "1. Create two Circle objects" << endl;
				cout << "2. Compare by volume" << endl;
				cout << "3. Compare by area" << endl;
				cout << "4. Print two Circle objects" << endl;
				cout << "5. Quit" << endl << endl;
				cout << "Enter your option (between 1 through 5) : ";
				cin >> cm;
				cout << endl;

				if (cPtr == nullptr && cm != 1) {
					cout << "  Must create circles first!" << endl << endl;
					cm = 9;
				}

				switch (cm) {

				case 1:

					if (cPtr == nullptr) {
						cPtrPtr = new CircleMattB*[number];

						for (int i = 0; i < number; i++) {
							cPtr = new CircleMattB();
							cPtrPtr[i] = cPtr;
						}
					}

					for (int i = 0; i < number; i++) {
						cout << "  Enter the x coordinate of the center point as a fraction. "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						cPtrPtr[i]->setCX(num, denom);

						cout << endl;
						cout << "  Enter the y coordinate of the center point as a fraction: "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						cPtrPtr[i]->setCY(num, denom);

						cout << endl;
						cout << "  Enter the radius as a fraction. "
							<< endl << endl;
						cout << "  Numerator : ";
						cin >> num;
						cout << "  Denominator : ";
						cin >> denom;

						cPtrPtr[i]->setR(num, denom);

						cout << endl;
						cout << "    Circle #" << i + 1 << ": " << *cPtrPtr[i];
						cout << endl << endl;
					}


					break;

				case 2:

					for (int i = 0; i < number; i++) {
						cout << "    Volume of Circle #" << i + 1 << ": ";
						cout << cPtrPtr[i]->getVolume() << " cubic units"
							<< endl << endl;
					}

					if (cPtrPtr[0]->getVolume() == cPtrPtr[1]->getVolume()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = cPtrPtr[0]->getVolume() - cPtrPtr[1]->getVolume();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					break;

				case 3:

					for (int i = 0; i < number; i++) {
						cout << "    Area of Circle #" << i + 1 << ": ";
						cout << cPtrPtr[i]->getArea() << " square units"
							<< endl << endl;
					}

					if (cPtrPtr[0]->getArea() == cPtrPtr[1]->getArea()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = cPtrPtr[0]->getArea() - cPtrPtr[1]->getArea();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					break;

				case 4:

					for (int i = 0; i < number; i++) {
						cout << "    Circle #" << i + 1 << ": ";
						cPtrPtr[i]->print();
						cout << endl << endl;
					}

					break;

				case 5:

					break;

				default:

					cout << "    Not a proper call!"
						<< endl << endl;

					break;
				}

			} while (cm != 5);

			break;

		case 3:

			do {
				cout << "MIXED RECTANGLE & CIRCLE MENU" << endl;
				cout << "1. Compare by area" << endl;
				cout << "2. Compare by volume" << endl;
				cout << "3. Print All objects" << endl;
				cout << "4. Quit" << endl << endl;
				cout << "Enter your option (between 1 through 4) : ";
				cin >> rcm;
				cout << endl;

				if (rPtr == nullptr && rm != 1) {
					cout << "  Must create rectangles first!" << endl << endl;
					rcm = 4;
				}

				if (cPtr == nullptr && cm != 1) {
					cout << "  Must create circles first!" << endl << endl;
					rcm = 4;
				}

				switch (rcm) {

				case 1:

					for (int i = 0; i < number; i++) {
						cout << "    Area of Rectange #" << i + 1 << ": ";
						cout << rPtrPtr[i]->getArea() << " square units" << endl;
					}
					cout << endl;

					if (rPtrPtr[0]->getArea() == rPtrPtr[1]->getArea()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = rPtrPtr[0]->getArea() - rPtrPtr[1]->getArea();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					for (int i = 0; i < number; i++) {
						cout << "    Area of Circle  #" << i + 1 << ": ";
						cout << cPtrPtr[i]->getArea() << " square units" << endl;
					}
					cout << endl;

					if (cPtrPtr[0]->getArea() == cPtrPtr[1]->getArea()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = cPtrPtr[0]->getArea() - cPtrPtr[1]->getArea();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					break;

				case 2:

					for (int i = 0; i < number; i++) {
						cout << "    Volume of Rectange #" << i + 1 << ": ";
						cout << rPtrPtr[i]->getVolume() << " cubic units" << endl;
					}
					cout << endl;

					if (rPtrPtr[0]->getVolume() == rPtrPtr[1]->getVolume()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = rPtrPtr[0]->getVolume() - rPtrPtr[1]->getVolume();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					for (int i = 0; i < number; i++) {
						cout << "    Volume of Circle #" << i + 1 << ": ";
						cout << cPtrPtr[i]->getVolume() << " cubic units" << endl;
					}
					cout << endl;

					if (rPtrPtr[0]->getVolume() == rPtrPtr[1]->getVolume()) {
						cout << "       Both values are equal." << endl << endl;
					}

					else {
						result = rPtrPtr[0]->getVolume() - rPtrPtr[1]->getVolume();

						if (result.getNum() < 0) {
							result.setNum(-result.getNum());
						}
						cout << "      The differance between them is: " << result << endl << endl;
					}

					break;

				case 3:

					for (int i = 0; i < number; i++) {
						cout << "    Rectange #" << i + 1 << ": ";
						rPtrPtr[i]->print();
						cout << endl << endl;
					}

					for (int i = 0; i < number; i++) {
						cout << "    Circle #" << i + 1 << ": ";
						cPtrPtr[i]->print();
						cout << endl << endl;
					}

					break;

				case 4:

					break;

				default:

					cout << "    Not a proper call!"
						<< endl << endl;

					break;
				}

			} while (rcm != 4);

			break;

		case 4:

			break;

		default:

			cout << "    Not a proper call!"
				<< endl << endl;
		}

	} while (option != 4);

	cout << "  Having fun ...!" << endl << endl;

	for (int i = 0; i < number; i++) {
		delete[] rPtrPtr[i];
		delete[] cPtrPtr[i];
	}
	delete[] rPtrPtr;
	delete[]cPtrPtr;
	rPtr = nullptr;
	cPtr = nullptr;
	rPtrPtr = nullptr;
	cPtrPtr = nullptr;
}

//EXAM/////////////////////////////////////////////////////////////////////////////////////////

int getContainedRect(RectangleMattB rArray[], int size) {
	int numPairs = 0;
	FractionMattB shortest = rArray[0].shortestDist(rArray[1]);
	int indexA = 0;
	int indexB = 0;

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {

			if (rArray[i].isContainedRect(rArray[j])) {
				numPairs++;

				if (rArray[i].shortestDist(rArray[j]) <= shortest) {
					shortest = rArray[i].shortestDist(rArray[j]);

					indexA = i;
					indexB = j;
				}
			}
		}
	}

	if (numPairs == 0) {
		cout << "No contained pairs." << endl << endl;
	}
	else {
		cout << "Shortest distance is: " << shortest << endl << endl;
		cout << "Closest contained are: ";
		cout << rArray[indexA] << ", " << rArray[indexB] << endl << endl;
	}

	return numPairs;
}

int getContainedCirc(CircleMattB rAray[], int size) {

	return 0;
}


//Circle version////////////////////////////////////////////////////////////
int getContainedCircle(CircleMattB cArray[], int size) {
	int numPairs = 0;
	double shortest = cArray[0].shortestDist(cArray[1]);
	int indexA = 0;
	int indexB = 0;

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {

			if (cArray[i].isContainedCircle(cArray[j])) {
				numPairs++;

				if (cArray[i].shortestDist(cArray[j]) <= shortest) {
					shortest = cArray[i].shortestDist(cArray[j]);

					indexA = i;
					indexB = j;
				}
			}
		}
	}

	if (numPairs == 0) {
		cout << "No contained pairs." << endl << endl;
	}
	else {
		cout << "Shortest distance is: " << shortest << endl << endl;
		cout << "Closest contained are: ";
		cout << cArray[indexA] << ", " << cArray[indexB] << endl << endl;
	}

	return numPairs;
}

