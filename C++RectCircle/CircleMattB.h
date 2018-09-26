/*
Program Name:  CircleMattB.h
Discussion:    Declaration File
               Circle class
Written By:    Mathew Buck
*/

#ifndef CIRCLEMATTB_H
#define CIRCLEMATTB_H
#include "FractionMattB.h"
#include "PointMattB.h"
#include <iostream>
using namespace std;

class CircleMattB {

protected:

	PointMattB c;
	FractionMattB r;

public:

	//-----------------------------------------------
	//Function Prototypes///////////////////////////
	//-----------------------------------------------

	CircleMattB(void); //default constructor
	CircleMattB(const PointMattB& cp, const FractionMattB& rad);
	CircleMattB(const CircleMattB& c); //copy constructor
	~CircleMattB(void);  //destructor
	PointMattB getC(void);
	FractionMattB getR(void);
	void setC(const PointMattB& p);
	void setR(const FractionMattB& f);
	int getCX(void);
	int getCY(void);
	void setCX(int num, int denom);
	void setCY(int num, int denom);
	void setR(int num, int denom);
	FractionMattB getArea(void);
	FractionMattB getVolume(void);
	void print(void);
	friend ostream& operator<<(ostream&, const CircleMattB& r);
	friend istream& operator>>(istream&, const CircleMattB& r);

	////TEST FINAL EXAM FUNCTIONS///////////////////////////////////////////////////////////
	FractionMattB absVal(FractionMattB input);
	double sqrtFrac(FractionMattB f);
	double distCenter(PointMattB p1);
	bool isContainedCircle(CircleMattB c);
	FractionMattB getCircum(void);
	double CircleMattB::shortestDist(CircleMattB c);
	///////////////////////////////////////////////////////////////////////////////////////////

};

#endif

