/*
Program Name:  FractionMattB.h
Discussion:    Declaration File 
               FractionMattB class
Written By:    Mathew Buck
Date:          2016/04/14
*/

#ifndef FRACTIONMATTB_H
#define FRACTIONMATTB_H

class FractionMattB {

private:

	int num = 0;
	int denom = 1;

public:

	//-----------------------------------------------
	//Function Prototypes///////////////////////////
	//-----------------------------------------------

	FractionMattB(void); //default constructor
	FractionMattB(int n, int d);
	FractionMattB(const FractionMattB& f); //copy constructor
	~FractionMattB(void);  //destructor

	int getNum(void);
	int getDenom(void);
	void setNum(int n);
	void setDenom(int d);

	void print(void);
	void lowestTerms(void);
	FractionMattB add(const FractionMattB& f);
	FractionMattB subtract(const FractionMattB& f); 
	FractionMattB multiply(const FractionMattB& f);
	FractionMattB divide(const FractionMattB& f);
	FractionMattB operator=(const FractionMattB& f);
	FractionMattB operator+(const FractionMattB& f);
	FractionMattB operator-(const FractionMattB& f);
	FractionMattB operator*(const FractionMattB& f); 
	FractionMattB operator/(const FractionMattB& f);
};

#endif