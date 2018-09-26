/*
Program Name:  PointMattB.cpp
Discussion:    Source file
               PointMattB class
Written By:    Mathew Buck
Date:          2016/04/28
*/

#include "PointMattB.h"
#include "FractionMattB.h"
#include <iostream>
using namespace std;

//-----------------------------------------------
//Function Definitions///////////////////////////
//-----------------------------------------------

PointMattB::PointMattB() {
}

PointMattB::PointMattB(int x, int y) {
	frX.setNum(x);
	frY.setNum(y);
}

PointMattB::PointMattB(FractionMattB x, FractionMattB y) {
	frX = x;
	frY = y;
}

PointMattB::PointMattB(const PointMattB& p) {
	frX = p.frX;
	frY = p.frY;
}

PointMattB::~PointMattB() {
}

int PointMattB::getX() {
	return frX.getNum();
}

FractionMattB PointMattB::getfrX() {
	return frX;
}

int PointMattB::getY() {
	return frY.getNum();
}

FractionMattB PointMattB::getfrY() {
	return frY;
}

void PointMattB::setX(int x) {
	frX.setNum(x);
}

void PointMattB::setY(int y) {
	frY.setNum(y);
}

void PointMattB::moveBy(const FractionMattB& fracX, const FractionMattB& fracY) {
	frX += fracX;
	frY += fracY;
}

void PointMattB::moveBy(const FractionMattB& frac) {
	frX += frac;
	frY += frac;
}

void PointMattB::moveBy(int i) {
	frX.setNum(frX.getNum() + i);
	frY.setNum(frY.getNum() + i);
}

void PointMattB::flipByX(void) {
	frY.setNum(-frY.getNum());
}

void PointMattB::flipByY(void) {
	frX.setNum(-frX.getNum());
}

void PointMattB::flipThroughOrigin(void) {
	frX.setNum(-frX.getNum());
	frY.setNum(-frY.getNum());
}

void PointMattB::print(void) {
	cout << "(" << frX.getNum() << ", " << frY.getNum();
	cout << ")" << endl;
}

ostream& operator<<(ostream& out, const PointMattB& p) {
	cout << "(" << p.frX << ", " << p.frY;
	cout << ")" << endl;

	return out;
}

istream& operator>>(istream& in, const PointMattB& p) {
	in >> p;

	return in;
}