/*
Program Name:  RectCircleUtility.h
Discussion:    Declaration File
               Utility for use with Rectangle and Circle classes
Written By:    Mathew Buck
*/

#include "CircleMattB.h"
#include "RectangleMattB.h"
#include "PointMattB.h"
#ifndef RECTCIRCLEUTILITY_H
#define RECTCIRCLEUTILITY_H

//---------------------------------------------------------
//Function Prototypes////////////////////////////////////
//---------------------------------------------------------

void menu(void);
int getContainedRect(RectangleMattB rArray[], int size);
int getContainedCircle(CircleMattB cArray[], int size);

#endif
