/*
Program Name:   mtMathewBuck.h
Discussion:     Function Prototypes (.h)
Written By:     Mathew Buck
Date:           2016/03/12
*/

#ifndef MTMATHEWBUCK_H
#define MTMATHEWBUCK_H

class Midterm {

private:
	int test = 0;

public:
//---------------------------------------------
//FUNCTION PROTOTYPES///////////////////////////
//---------------------------------------------

	Midterm(); //default constructor

	void menuUncom(void); 

	void menuUncomStats(void);

	int* extractUncommonDigitMathewBuck(int[], int);

	int* getUncommonDigitStatisticsMathewBuck(int[], int);

};

#endif