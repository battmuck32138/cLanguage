/*
Program Name:  PointMattB.h
Discussion:    Declaration File
               PointMattB class
Written By:    Mathew Buck
*/

#ifndef POINTMATTB_H
#define POINTMATTB_H
#include "FractionMattB.h"
#include <iostream>
using namespace std;

class PointMattB {

protected:

	FractionMattB frX;
	FractionMattB frY;

public:

	//-----------------------------------------------
	//Function Prototypes///////////////////////////
	//-----------------------------------------------

	PointMattB(void); //default constructor
	PointMattB(int x, int y);
	PointMattB(FractionMattB x, FractionMattB y);
	PointMattB(const PointMattB& p); //copy constructor
	~PointMattB(void);  //destructor
	FractionMattB getfrX(void);
	FractionMattB getfrY(void);
	int getX(void);
	int getY(void);
	void setX(int num, int denom);
	void setY(int num, int denom);
	void moveBy(const FractionMattB& fracX, const FractionMattB& fracY);
	void moveBy(const FractionMattB& frac);
	void moveBy(int i);
	void flipByX(void);
	void flipByY(void);
	void flipThroughOrigin(void);
	void print(void);
	friend ostream& operator<<(ostream&, const PointMattB& p);
	friend istream& operator>>(istream&, const PointMattB& p);
};

#endif
