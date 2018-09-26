/*
Program Name:  RectangleMattB.cpp
Discussion:    Source file
               Rectangle class
Written By:    Mathew Buck
*/

#include "RectangleMattB.h"
#include "PointMattB.h"
#include "FractionMattB.h"
#include <iostream>
using namespace std;

//-----------------------------------------------
//Function Definitions///////////////////////////
//-----------------------------------------------

RectangleMattB::RectangleMattB() {
}

RectangleMattB::RectangleMattB(const PointMattB& urp,const  PointMattB& llp) {
	ur = urp;
	ll = llp;
}

RectangleMattB::RectangleMattB(const RectangleMattB& r) {
	ur = r.ur;
	ll = r.ll;
}

RectangleMattB::~RectangleMattB() {
}

PointMattB RectangleMattB::getUR() {
	return ur;
}

PointMattB RectangleMattB::getLL() {
	return ll;
}

void RectangleMattB::setUR(const PointMattB& p) {
	ur = p;
}

void RectangleMattB::setLL(const PointMattB& p) {
	ll = p;
}

FractionMattB RectangleMattB::getURX() {
	return ur.getfrX();
}

FractionMattB RectangleMattB::getURY() {
	return ur.getfrY();
}

FractionMattB RectangleMattB::getLLX() {
	return ll.getfrX();
}

FractionMattB RectangleMattB::getLLY() {
	return ll.getfrY();
}

void RectangleMattB::setURX(int num, int denom) {
	ur.setX(num, denom);
}

void RectangleMattB::setURY(int num, int denom) {
	ur.setY(num, denom);
}

void RectangleMattB::setLLX(int num, int denom) {
	ll.setX(num, denom);
}

void RectangleMattB::setLLY(int num, int denom) {
	ll.setY(num, denom);
}

FractionMattB RectangleMattB::getArea() {
	FractionMattB l = ur.getfrX() - ll.getfrX();
	FractionMattB w = ur.getfrY() - ll.getfrY();
	FractionMattB r = l * w;
	absVal(r);

	return r;
}

FractionMattB  RectangleMattB::getVolume() {
	return FractionMattB();
}

void RectangleMattB::print() {
	cout << "Upper Right " << ur << ", " << "Lower Left " << ll;
}

ostream& operator<<(ostream& out, const RectangleMattB& r) {
	out << "Upper Right " << r.ur << ", "  << "Lower Left " << r.ll;

	return out;
}

istream& operator>>(istream& in, const RectangleMattB& r) {
	in >> r;

	return in;
}

///////////TEST FINAL EXAM FUNCTIONS//////////////////////////////////////////////////////////////

FractionMattB RectangleMattB::absVal(FractionMattB input) {
	FractionMattB absVal = input;

	if (absVal < FractionMattB(0, 1)) {
		absVal.setNum(absVal.getNum() * -1);
	}

	return absVal;
}

bool RectangleMattB::isContainedRect(RectangleMattB r) {
	RectangleMattB big = *this;
	RectangleMattB small = r;

	if (getArea() < r.getArea()) {
		big = r;
		small = *this;
	}
	
	return (big.getURY() >= small.getURY()
		&& big.getLLY() <= small.getLLY()
		&& big.getURX() >= small.getURX()
		&& big.getLLX() <= small.getLLX());
}

FractionMattB RectangleMattB::getPerimeterRect() {
	FractionMattB length =absVal(getURY() - getLLY());
	FractionMattB width = absVal(getURX() - getLLX());

	return (length + width) * FractionMattB(2, 1);
}

FractionMattB RectangleMattB::shortestDist(RectangleMattB r) {
	FractionMattB result;
	FractionMattB tmp;

	result = absVal(getURX() - r.getURX());

	tmp = absVal(getURY() - r.getURY());
	result = (tmp < result) ? tmp : result;

	tmp = absVal(getLLX() - r.getLLX());
	result = (tmp < result) ? tmp : result;

	tmp = absVal(getLLY() - r.getLLY());
	result = (tmp < result) ? tmp : result;

	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////