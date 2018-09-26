/*
Program Name:  cis25Spring2016MathewBuckHW7Ex1.cpp
Discussion:    Source File
               Application Driver
Written By:    Mathew Buck
Date:          2016/05/12
*/

#include "RectCircleUtility.h"
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
Assignment Number:  Homework 7,
Exercise #1
Written by:         Mathew Buck
Due Date:           2016/05/12

MAIN MENU
(1) Rectangel Tasks
(2) Circle Tasks
(3) Mixed Rectangle & Circle Tasks
(4) Quit

Enter your option (1, 2, 3, or 4): 1

RECTANGLE MENU
1. Create two Rectangle objects
2. Compare by volume
3. Compare by area
4. Print two Rectangle objects
5. Quit

Enter your option (between 1 through 5) : 1

Enter the x coordinate of the upper right point as a fraction.

Numerator : 1
Denominator : 2

Enter the y coordinate of the upper right point as a fraction:

Numerator : 2
Denominator : 1

Enter the x coordinate of the lower left point as a fraction.

Numerator : 4
Denominator : 1

Enter the y coordinate of the upper right point as a fraction:

Numerator : 1
Denominator : 1

Rectangle #1: Upper Right (1/2, 2/1), Lower Left (4/1, 1/1)

Enter the x coordinate of the upper right point as a fraction.

Numerator : -1
Denominator : 1

Enter the y coordinate of the upper right point as a fraction:

Numerator : -1
Denominator : 2

Enter the x coordinate of the lower left point as a fraction.

Numerator : 2
Denominator : 1

Enter the y coordinate of the upper right point as a fraction:

Numerator : -2
Denominator : 1

Rectangle #2: Upper Right (-1/1, -1/2), Lower Left (2/1, -2/1)

RECTANGLE MENU
1. Create two Rectangle objects
2. Compare by volume
3. Compare by area
4. Print two Rectangle objects
5. Quit

Enter your option (between 1 through 5) : 2

Volume of Rectange #1: 0/1 cubic untits

Volume of Rectange #2: 0/1 cubic untits

Both values are equal.

RECTANGLE MENU
1. Create two Rectangle objects
2. Compare by volume
3. Compare by area
4. Print two Rectangle objects
5. Quit

Enter your option (between 1 through 5) : 3

Area of Rectange #1: 7/2 square units

Area of Rectange #2: 9/2 square units

The differance between them is: 1/1

RECTANGLE MENU
1. Create two Rectangle objects
2. Compare by volume
3. Compare by area
4. Print two Rectangle objects
5. Quit

Enter your option (between 1 through 5) : 4

Rectange #1: Upper Right (1/2, 2/1), Lower Left (4/1, 1/1)

Rectange #2: Upper Right (-1/1, -1/2), Lower Left (2/1, -2/1)

RECTANGLE MENU
1. Create two Rectangle objects
2. Compare by volume
3. Compare by area
4. Print two Rectangle objects
5. Quit

Enter your option (between 1 through 5) : 5

MAIN MENU
(1) Rectangel Tasks
(2) Circle Tasks
(3) Mixed Rectangle & Circle Tasks
(4) Quit

Enter your option (1, 2, 3, or 4): 2

CIRCLE MENU
1. Create two Circle objects
2. Compare by volume
3. Compare by area
4. Print two Circle objects
5. Quit

Enter your option (between 1 through 5) : 1

Enter the x coordinate of the center point as a fraction.

Numerator : 1
Denominator : 2

Enter the y coordinate of the center point as a fraction:

Numerator : 2
Denominator : 1

Enter the radius as a fraction.

Numerator : 4
Denominator : 1

Circle #1: Center (1/2, 2/1), Radius Point 4/1

Enter the x coordinate of the center point as a fraction.

Numerator : -1
Denominator : 1

Enter the y coordinate of the center point as a fraction:

Numerator : -1
Denominator : 2

Enter the radius as a fraction.

Numerator : 2
Denominator : 1

Circle #2: Center (-1/1, -1/2), Radius Point 2/1

CIRCLE MENU
1. Create two Circle objects
2. Compare by volume
3. Compare by area
4. Print two Circle objects
5. Quit

Enter your option (between 1 through 5) : 2

Volume of Circle #1: 0/1 cubic units

Volume of Circle #2: 0/1 cubic units

Both values are equal.

CIRCLE MENU
1. Create two Circle objects
2. Compare by volume
3. Compare by area
4. Print two Circle objects
5. Quit

Enter your option (between 1 through 5) : 3

Area of Circle #1: 1256/25 square units

Area of Circle #2: 314/25 square units

The differance between them is: 942/25

CIRCLE MENU
1. Create two Circle objects
2. Compare by volume
3. Compare by area
4. Print two Circle objects
5. Quit

Enter your option (between 1 through 5) : 4

Circle #1: Center (1/2, 2/1), Radius Point 4/1

Circle #2: Center (-1/1, -1/2), Radius Point 2/1

CIRCLE MENU
1. Create two Circle objects
2. Compare by volume
3. Compare by area
4. Print two Circle objects
5. Quit

Enter your option (between 1 through 5) : 5

MAIN MENU
(1) Rectangel Tasks
(2) Circle Tasks
(3) Mixed Rectangle & Circle Tasks
(4) Quit

Enter your option (1, 2, 3, or 4): 3

MIXED RECTANGLE & CIRCLE MENU
1. Compare by area
2. Compare by volume
3. Print All objects
4. Quit

Enter your option (between 1 through 4) : 1

Area of Rectange #1: 7/2 square units
Area of Rectange #2: 9/2 square units

The differance between them is: 1/1

Area of Circle  #1: 1256/25 square units
Area of Circle  #2: 314/25 square units

The differance between them is: 942/25

MIXED RECTANGLE & CIRCLE MENU
1. Compare by area
2. Compare by volume
3. Print All objects
4. Quit

Enter your option (between 1 through 4) : 2

Volume of Rectange #1: 0/1 cubic units
Volume of Rectange #2: 0/1 cubic units

Both values are equal.

Volume of Circle #1: 0/1 cubic units
Volume of Circle #2: 0/1 cubic units

Both values are equal.

MIXED RECTANGLE & CIRCLE MENU
1. Compare by area
2. Compare by volume
3. Print All objects
4. Quit

Enter your option (between 1 through 4) : 3

Rectange #1: Upper Right (1/2, 2/1), Lower Left (4/1, 1/1)

Rectange #2: Upper Right (-1/1, -1/2), Lower Left (2/1, -2/1)

Circle #1: Center (1/2, 2/1), Radius Point 4/1

Circle #2: Center (-1/1, -1/2), Radius Point 2/1

MIXED RECTANGLE & CIRCLE MENU
1. Compare by area
2. Compare by volume
3. Print All objects
4. Quit

Enter your option (between 1 through 4) : 7

Not a proper call!

MIXED RECTANGLE & CIRCLE MENU
1. Compare by area
2. Compare by volume
3. Print All objects
4. Quit

Enter your option (between 1 through 4) : 4

MAIN MENU
(1) Rectangel Tasks
(2) Circle Tasks
(3) Mixed Rectangle & Circle Tasks
(4) Quit

Enter your option (1, 2, 3, or 4): 7

Not a proper call!

MAIN MENU
(1) Rectangel Tasks
(2) Circle Tasks
(3) Mixed Rectangle & Circle Tasks
(4) Quit

Enter your option (1, 2, 3, or 4): 4

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
