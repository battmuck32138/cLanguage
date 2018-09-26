/*
Program Name:  CircleMattB.cpp
Discussion:    Source file
               Circle class
Written By:    Mathew Buck
*/

#include "CircleMattB.h"
#include "RectangleMattB.h"
#include "PointMattB.h"
#include "FractionMattB.h"
#include <iostream>
using namespace std;

//-----------------------------------------------
//Function Definitions///////////////////////////
//-----------------------------------------------

CircleMattB::CircleMattB() {
}

CircleMattB::CircleMattB(const PointMattB& cp, const  FractionMattB& rad) {
	c = cp;
	r = rad;
}

CircleMattB::CircleMattB(const CircleMattB& circ) {
	c = circ.c;
	r = circ.r;
}

CircleMattB::~CircleMattB() {
}

PointMattB CircleMattB::getC() {
	return c;
}

FractionMattB CircleMattB::getR() {
	return r;
}

void CircleMattB::setC(const PointMattB& p) {
	c = p;
}

void CircleMattB::setR(const FractionMattB& f) {
	r = f;
}

void CircleMattB::setR(int num, int denom) {
	r.setNum(num);
	r.setDenom(denom);
}

int CircleMattB::getCX() {
	return c.getX();
}

int CircleMattB::getCY() {
	return c.getY();
}


void CircleMattB::setCX(int num, int denom) {
	c.setX(num, denom);
}

void CircleMattB::setCY(int num, int denom) {
	c.setY(num, denom);
}

FractionMattB CircleMattB::getArea() {
	return FractionMattB(157, 50) * r * r;
}

FractionMattB CircleMattB::getVolume() {
	return FractionMattB();
}

ostream& operator<<(ostream& out, const CircleMattB& circ) {
	out << "Center " << circ.c << ", " << "Radius Point " << circ.r;

	return out;
}

istream& operator>>(istream& in, const CircleMattB& circ) {
	in >> circ;

	return in;
}

void CircleMattB::print() {
	cout << "Center " << c << ", " << "Radius Point " << r;
}


///////////TEST FINAL EXAM FUNCTIONS//////////////////////////////////////////////////////////////

FractionMattB CircleMattB::absVal(FractionMattB input) {
	FractionMattB absVal = input;

	if (absVal < FractionMattB(0, 1)) {
		absVal.setNum(absVal.getNum() * -1);
	}

	return absVal;
}

double CircleMattB::sqrtFrac(FractionMattB f) {
	double number = f.getNum() / f.getDenom();
	double tmp;
	double sqrt = number / 2;

	do {
		tmp = sqrt;
		sqrt = (tmp + (number / tmp)) / 2;
	} while ((tmp - sqrt) != 0);

	return sqrt;
}

double CircleMattB::distCenter(PointMattB p1) {
	FractionMattB a = absVal(c.getfrX() - p1.getfrX());
	FractionMattB b = absVal(c.getfrY() - p1.getfrY());
	FractionMattB csq = a * a + b * b;

	return sqrtFrac(csq);
}

bool CircleMattB::isContainedCircle(CircleMattB c) {
	CircleMattB big = *this;
	CircleMattB small = c;
	double rad = 0;

	if (getArea() < c.getArea()) {
		big = c;
		small = *this;
	}

	rad = big.getR().getNum() / big.getR().getDenom();

	return rad > distCenter(c.getC());
}

FractionMattB CircleMattB::getCircum() {
	FractionMattB pi = FractionMattB(157, 50);
	FractionMattB two = FractionMattB(2, 1);

	return getR() * two * pi;
}

double CircleMattB::shortestDist(CircleMattB c) {
	CircleMattB big = *this;
	CircleMattB small = c;
	double bigRad = 0;
	double smallRad = 0;

	if (getArea() < c.getArea()) {
		big = c;
		small = *this;
	}

	bigRad = big.getR().getNum() / big.getR().getDenom();
	smallRad = small.getR().getNum() / big.getR().getDenom();

	return bigRad - smallRad - distCenter(c.getC());
}
//////////////////////////////////////////////////////////////////////////////////////////