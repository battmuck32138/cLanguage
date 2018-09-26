/*
Program Name:  cis25Spring2016MathewBuckHW4Ex1.cpp
Discussion:    Source File
               Application Driver
Written By:    Mathew Buck
Date:          2016/04/14
*/

#include "FractionMattBUtility.h"
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
Assignment Number:  Homework 04,
Exercise #1
Written by:         Mathew Buck
Due Date:           2016/04/14

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 6

Printing Option --

Not a proper call as no Fractions are available!

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 2

Adding Option --

Not a proper call as no Fractions are available!

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 1

Initializing Option --

Enter numerator of left fraction.  1

Enter denominator of left fraction (not 0).  0
Enter denominator of left fraction (not 0).  -0
Enter denominator of left fraction (not 0).  2

Calling FractionMattB(n,d)  1/2

Enter numerator of right fraction.  5

Enter denominator of right fraction (not 0).  -7

Calling FractionMattB(n,d)  -5/7

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 6

Printing Option --

********************************
*       Printing Menu          *
*                              *
*  (leftOp, rightOp, result)   *
*  1. print() - Member         *
*  2. print() - Stand Alone    *
*  3. ostream << - Stand Alone *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 1

Left Frac 1/2, Right Frac -5/7, Result Frac is Null.

********************************
*       Printing Menu          *
*                              *
*  (leftOp, rightOp, result)   *
*  1. print() - Member         *
*  2. print() - Stand Alone    *
*  3. ostream << - Stand Alone *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 2

Calling FractionMattB(const FractionMattB& f)1/2

Calling FractionMattB(const FractionMattB& f)-5/7

Left Frac 1/2, Right Frac -5/7, Result Frac is Null.

Calling ~Fraction()

Calling ~Fraction()

********************************
*       Printing Menu          *
*                              *
*  (leftOp, rightOp, result)   *
*  1. print() - Member         *
*  2. print() - Stand Alone    *
*  3. ostream << - Stand Alone *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 3

Left Frac 1/2, Right Frac -5/7, Result Frac is Null.

********************************
*       Printing Menu          *
*                              *
*  (leftOp, rightOp, result)   *
*  1. print() - Member         *
*  2. print() - Stand Alone    *
*  3. ostream << - Stand Alone *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 4

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 2

Adding Option --

Calling FractionMattB()  0/1

********************************
*         Adding Menu          *
*                              *
*  1. add() - Member           *
*  2. add() - Stand Alone      *
*  3. operator+() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 8

Wrong Option!

********************************
*         Adding Menu          *
*                              *
*  1. add() - Member           *
*  2. add() - Stand Alone      *
*  3. operator+() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 1

Calling member add()

Calling FractionMattB(n,d)  -3/14

Calling FractionMattB(const FractionMattB& f)-3/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*         Adding Menu          *
*                              *
*  1. add() - Member           *
*  2. add() - Stand Alone      *
*  3. operator+() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 2

Calling stand alone add()

Calling FractionMattB(const FractionMattB& f)1/2

Calling FractionMattB(const FractionMattB& f)-5/7

Calling FractionMattB(n,d)  -3/14

Calling FractionMattB(const FractionMattB& f)-3/14

Calling ~Fraction()

Calling ~Fraction()

Calling ~Fraction()

Calling FractionMattB(const FractionMattB& f)-3/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*         Adding Menu          *
*                              *
*  1. add() - Member           *
*  2. add() - Stand Alone      *
*  3. operator+() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 3

Calling member operator+()

Calling FractionMattB(n,d)  -3/14

Calling FractionMattB(const FractionMattB& f)-3/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*         Adding Menu          *
*                              *
*  1. add() - Member           *
*  2. add() - Stand Alone      *
*  3. operator+() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 4

1/2 + -5/7 = -3/14

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 3

Subtracting Option --

********************************
*      Subtracting  Menu       *
*                              *
*  1. subtract() - Member      *
*  2. subract() - Stand Alone  *
*  3. operator-() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 1

Calling member subtract()

Calling FractionMattB(n,d)  17/14

Calling FractionMattB(const FractionMattB& f)17/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*      Subtracting  Menu       *
*                              *
*  1. subtract() - Member      *
*  2. subract() - Stand Alone  *
*  3. operator-() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 2

Calling stand alone subtract()

Calling FractionMattB(const FractionMattB& f)1/2

Calling FractionMattB(const FractionMattB& f)-5/7

Calling FractionMattB(n,d)  17/14

Calling FractionMattB(const FractionMattB& f)17/14

Calling ~Fraction()

Calling ~Fraction()

Calling ~Fraction()

Calling FractionMattB(const FractionMattB& f)17/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*      Subtracting  Menu       *
*                              *
*  1. subtract() - Member      *
*  2. subract() - Stand Alone  *
*  3. operator-() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 3

Calling member operator-()

Calling FractionMattB(n,d)  17/14

Calling FractionMattB(const FractionMattB& f)17/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*      Subtracting  Menu       *
*                              *
*  1. subtract() - Member      *
*  2. subract() - Stand Alone  *
*  3. operator-() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 4

1/2 - -5/7 = 17/14

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 1

Initializing Option --

Your fractions are:

1/2  &  -5/7

*******************************
*            Menu             *
*                             *
*  1. Update left fraction    *
*  2. Update right fraction   *
*  3. Update both fractions   *
*  4. Return to previous menu *
*                             *
*******************************
Select an option (use integer value only): 1

Enter numerator of left fraction.  3

Enter denominator of left fraction (not 0).  -6

Your fractions are:

-1/2  &  -5/7

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 4

Multiplying Option --

********************************
*      Multiplying  Menu       *
*                              *
*  1. multiply() - Member      *
*  2. multiply() - Stand Alone *
*  3. operator*() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 1

Calling member multiply()

Calling FractionMattB(n,d)  5/14

Calling FractionMattB(const FractionMattB& f)5/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*      Multiplying  Menu       *
*                              *
*  1. multiply() - Member      *
*  2. multiply() - Stand Alone *
*  3. operator*() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 2

Calling stand alone multiply()

Calling FractionMattB(const FractionMattB& f)-1/2

Calling FractionMattB(const FractionMattB& f)-5/7

Calling FractionMattB(n,d)  5/14

Calling FractionMattB(const FractionMattB& f)5/14

Calling ~Fraction()

Calling ~Fraction()

Calling ~Fraction()

Calling FractionMattB(const FractionMattB& f)5/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*      Multiplying  Menu       *
*                              *
*  1. multiply() - Member      *
*  2. multiply() - Stand Alone *
*  3. operator*() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 3

Calling member operator*()

Calling FractionMattB(n,d)  5/14

Calling FractionMattB(const FractionMattB& f)5/14

Calling ~Fraction()

Calling ~Fraction()

********************************
*      Multiplying  Menu       *
*                              *
*  1. multiply() - Member      *
*  2. multiply() - Stand Alone *
*  3. operator*() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 4

-1/2 * -5/7 = 5/14

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 5

Dividing Option --

********************************
*       Dividing Menu          *
*                              *
*  1. divide() - Member        *
*  2. divide() - Stand Alone   *
*  3. operator/() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 1

Calling member divide()

Calling FractionMattB(n,d)  7/10

Calling FractionMattB(const FractionMattB& f)7/10

Calling ~Fraction()

Calling ~Fraction()

********************************
*       Dividing Menu          *
*                              *
*  1. divide() - Member        *
*  2. divide() - Stand Alone   *
*  3. operator/() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 2

Calling stand alone divide()

Calling FractionMattB(const FractionMattB& f)-1/2

Calling FractionMattB(const FractionMattB& f)-5/7

Calling FractionMattB(n,d)  7/10

Calling FractionMattB(const FractionMattB& f)7/10

Calling ~Fraction()

Calling ~Fraction()

Calling ~Fraction()

Calling FractionMattB(const FractionMattB& f)7/10

Calling ~Fraction()

Calling ~Fraction()

********************************
*       Dividing Menu          *
*                              *
*  1. divide() - Member        *
*  2. divide() - Stand Alone   *
*  3. operator/() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 3

Calling member operator/()

Calling FractionMattB(n,d)  7/10

Calling FractionMattB(const FractionMattB& f)7/10

Calling ~Fraction()

Calling ~Fraction()

********************************
*       Dividing Menu          *
*                              *
*  1. divide() - Member        *
*  2. divide() - Stand Alone   *
*  3. operator/() - Member     *
*  4. Return to Previous MENU  *
********************************
Select an option (1, 2, 3, or 4): 4

-1/2 / -5/7 = 7/10

********************
*       Menu       *
*                  *
*  1. Initializing *
*  2. Adding       *
*  3. Subtracting  *
*  4. Multiplying  *
*  5. Dividing     *
*  6. Printing     *
*  7. Quit         *
********************
Select an option (use integer value only): 7

Having fun ...!

Calling ~Fraction()

Calling ~Fraction()

Calling ~Fraction()

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

