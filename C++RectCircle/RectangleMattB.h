/*
Program Name:  RectangleMattB.h
Discussion:    Declaration File
               Rectangle class
Written By:    Mathew Buck
*/

#ifndef RECTANGLEMATTB_H
#define RECTANGLEMATTB_H
#include "FractionMattB.h"
#include "PointMattB.h"
#include <iostream>
using namespace std;

class RectangleMattB {

protected:

	PointMattB ur;
	PointMattB ll;

public:

	//-----------------------------------------------
	//Function Prototypes///////////////////////////
	//-----------------------------------------------

	RectangleMattB(void); //default constructor
	RectangleMattB(const PointMattB& ur, const PointMattB& ll);
	RectangleMattB(const RectangleMattB& r); //copy constructor
	~RectangleMattB(void);  //destructor
	PointMattB getUR(void);
	PointMattB getLL(void);
	void setUR(const PointMattB& p);
	void setLL(const PointMattB& p);
	FractionMattB getURX(void);
	FractionMattB getURY(void);
	FractionMattB getLLX(void);
	FractionMattB getLLY(void);
	void setURX(int num, int denom);
	void setURY(int num, int denom);
	void setLLX(int num, int demom);
	void setLLY(int num, int denom);
	FractionMattB getArea(void);
	FractionMattB getVolume(void);
	void print(void);
	friend ostream& operator<<(ostream&, const RectangleMattB& r);
	friend istream& operator>>(istream&, const RectangleMattB& r);

	////TEST FINAL EXAM FUNCTIONS///////////////////////////////////////////////////////////
	FractionMattB absVal(FractionMattB input);
	bool isContainedRect(RectangleMattB r);
	FractionMattB getPerimeterRect(void);
	FractionMattB RectangleMattB::shortestDist(RectangleMattB r);
	///////////////////////////////////////////////////////////////////////////////////////////
};

#endif
