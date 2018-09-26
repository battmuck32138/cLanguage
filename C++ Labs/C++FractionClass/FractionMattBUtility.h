/*
Program Name:  FractionMattBUtility.h
Discussion:    Declaration File 
               Utility for use with FractionMattB class
Written By:    Mathew Buck
Date:          2016/04/14
*/

#include "FractionMattB.h"
#ifndef FRACTIONMATTBUTILITY_H
#define FRACTIONMATTBUTILITY_H

	//---------------------------------------------------------
	//Function Prototypes////////////////////////////////////
	//---------------------------------------------------------

	void inIt(FractionMattB** lPtrPtr, FractionMattB** rPtrPtr);
	FractionMattB add(const FractionMattB& lF, const FractionMattB& rF);
	FractionMattB subtract(const FractionMattB& lF, const FractionMattB& rF);
	FractionMattB multiply(const FractionMattB& lF, const FractionMattB& rF);
	FractionMattB divide(const FractionMattB& lF, const FractionMattB& rF);
	void print(const FractionMattB& lF, const FractionMattB& rF, const FractionMattB& resF);
	void menu(void);

#endif