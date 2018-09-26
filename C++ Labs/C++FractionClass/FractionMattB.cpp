/*
Program Name:  FractionMattB.cpp
Discussion:    Source File 
               FractionMattB class
Written By:    Mathew Buck
Date:          2016/04/14
*/

#include "FractionMattB.h"
#include <iostream>
using namespace std;

//-----------------------------------------------
//Function Definitions///////////////////////////
//-----------------------------------------------

FractionMattB::FractionMattB() {
	num = 0;
	denom = 1;
}
	
FractionMattB::FractionMattB(int n, int d) {
	num = n;
	denom = d;

	if (denom == 0) {
		cout << endl;
		cout << num << "/" << denom 
			<< "  Denominator is undefined at zero." << endl;
		cout << endl;

		num = 0;
		denom = 1;
	}

	lowestTerms();
}

FractionMattB::FractionMattB(const FractionMattB& f) {
	num = f.num;
	denom = f.denom;

	lowestTerms();
}

FractionMattB::~FractionMattB() {
}

int FractionMattB::getNum() {
	return num;
}

int FractionMattB::getDenom() {
	return denom;
}

void FractionMattB::lowestTerms() {
	int min = 0;
	int signNum = 0;
	int signDenom = 0;

	signNum = (num < 0) ? -1 : 1;
	signDenom = (denom < 0) ? -1 : 1;
	num = (num < 0) ? -num : num;
	denom = (denom < 0) ? -denom : denom;

	min = denom < num ? denom : num;

	for (int i = 2; i <= min; i++) {

		while ((num % i == 0) && (denom % i == 0)) {
			num /= i;
			denom /= i;
		}
	}

	if (signDenom == -1) {
		signNum *= signDenom;
		signDenom = -signDenom;
	}

	num *= signNum;
}

void FractionMattB::setNum(int n) {
	num = n;
	lowestTerms();
}

void FractionMattB::setDenom(int d) {
	if (d == 0) {
		cout << endl;
		cout << "Denominator can't be zero!" << endl;
		cout << endl;
	}

	else {
		denom = d;
	}

	lowestTerms();
}

void FractionMattB::print() {
	cout << num << "/" << denom;
}

FractionMattB FractionMattB::add(const FractionMattB& f) {
	return FractionMattB(num * f.denom + denom * f.num, denom * f.denom);
}

FractionMattB FractionMattB::subtract(const FractionMattB& f) {
	return FractionMattB(num * f.denom - denom * f.num, denom * f.denom);
}

FractionMattB FractionMattB::multiply(const FractionMattB& f) {
	return FractionMattB(num * f.num, denom * f.denom);
}

FractionMattB FractionMattB::divide(const FractionMattB& f) {
	return FractionMattB(num * f.denom, denom * f.num);
}

FractionMattB FractionMattB::operator=(const FractionMattB& f) {
	num = f.num;
	denom = f.denom;
	
	return *this;
}

FractionMattB FractionMattB::operator+(const FractionMattB& f) {
	return FractionMattB(num * f.denom + denom * f.num, denom * f.denom);
}

FractionMattB FractionMattB::operator-(const FractionMattB& f) {
	return FractionMattB(num * f.denom - denom * f.num, denom * f.denom);
}

FractionMattB FractionMattB::operator*(const FractionMattB& f) {
	return FractionMattB(num * f.num, denom * f.denom);
}

FractionMattB FractionMattB::operator/(const FractionMattB& f) {
	return FractionMattB(num * f.denom, denom * f.num);
}

FractionMattB FractionMattB::operator+=(const FractionMattB& f) {
	num = num * f.denom + denom * f.num;
	denom = denom * f.denom;
	lowestTerms();

	return *this;
}