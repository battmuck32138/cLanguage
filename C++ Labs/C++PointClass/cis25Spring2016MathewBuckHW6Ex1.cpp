/*
Program Name:  cis25Spring2016MathewBuckHW6Ex1.cpp
Discussion:    Source File
               Application Driver
Written By:    Mathew Buck
Date:          2016/04/14
*/

#include "PointMattBUtility.h"
#include "PointMattB.h"
#include "FractionMattB.h"
#include <iostream>
using namespace std;

//------------------------------------------------------------
//Driver////////////////////////////////////////////////////
//------------------------------------------------------------

int main() {

    menu();

	return 0;
}

//-------------------------------------------------------------
//Output///////////////////////////////////////////////////////
//-------------------------------------------------------------

/*
CIS 25 - C++ Programming
Laney College
Mathew Buck

Assignment Information --
Assignment Number:  Homework 06,
Exercise #1
Written by:         Mathew Buck
Due Date:           2016/04/28

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 2

Not a proper call as no Points are available!

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 1

Initializing Option --

Enter x coordinate: -9

Enter y coordinate: 3

Your point is (-9, 3)

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 1

Enter new x coordinate: 3

Enter new  y coordinate: -5

Your new point is (3, -5)

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 4

Printing Option --

Print function-- Your point is: (3, -5)

Operator << overload-- Your point is: (3/1, -5/1)

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 2

Moving Option --

*************************
*     MENU MovingPoint  *
*  1. By (frX, frY)     *
*  2. By fr             *
*  3. By int            *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use integer value only): 1

Moving by frX and frY:

How far do you want to move the x coordinate (pos or neg)? -8

How far do you want to move the y coordinate (pos or neg)? 2

Your point moved to (-5, -3)

*************************
*     MENU MovingPoint  *
*  1. By (frX, frY)     *
*  2. By fr             *
*  3. By int            *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use integer value only): 2

Moving by fraction:

How far do you want to move your point? (pos or neg)? 3

Your point moved to (-2, 0)

*************************
*     MENU MovingPoint  *
*  1. By (frX, frY)     *
*  2. By fr             *
*  3. By int            *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use integer value only): 3

Moving by int:

How far do you want to move your point? (pos or neg)? 2

Your point moved to (0, 2)

Printing:

Your point is (0, 2)

*************************
*     MENU MovingPoint  *
*  1. By (frX, frY)     *
*  2. By fr             *
*  3. By int            *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use integer value only): 4

Printing:

Your point is (0, 2)

*************************
*     MENU MovingPoint  *
*  1. By (frX, frY)     *
*  2. By fr             *
*  3. By int            *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use integer value only): 5

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 3

Flipping Option --

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 1

Flipping By Y:

Your point moved to (0, 2)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 2

Flipping By X:

Your point moved to (0, -2)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 3

Flipping Through Origin:

Your point moved to (0, 2)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 4

Printing:

Your point is (0, 2)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 5

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 7

Not a proper call!

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 1

Enter new x coordinate: 4

Enter new  y coordinate: -5

Your new point is (4, -5)

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 3

Flipping Option --

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 1

Flipping By Y:

Your point moved to (-4, -5)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 2

Flipping By X:

Your point moved to (-4, 5)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 3

Flipping Through Origin:

Your point moved to (4, -5)

*************************
*    MENU FlippingPoint *
*  1. By Y              *
*  2. By X              *
*  3. By Origen         *
*  4. Printing          *
*  5. Returning         *
*************************
Select an option (use interger value only): 5

********************
*   MENU Point     *
*  1. Initializing *
*  2. Moving       *
*  3. Flipping     *
*  4. Printing     *
*  5. Quitting     *
********************
Select an option (use integer value only): 5

Having fun ...!

*/

/*
Comments--Code and Logic:

The copy/paste from the output window moves
every thing to the far left.  When you run
my program you will see that the output and
indentation match your sample.

If there is a way to copy past the display
without losing the indentations, please
let me know.  Thanks!

*/
