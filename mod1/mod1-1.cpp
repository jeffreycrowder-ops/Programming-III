/*
 * mod1-1.cpp
 *
 *  Created on: Sep 20, 2026
 *      Author: Jeff
 */


/* Simple Program with a few Errors for Correction
*Please be sure to correct all outlined errors.
*/

	// fix 1: comment block above was not closed. Added closing */

#include<iostream>
	// fix 2: removed #include<conio.h>, not compatible with modern c++ compilers

//Standard namespace declaration
	// fix 3: Above line was plain text, added "//" to make a comment line

using namespace std;

//Main Function
	//fix 4: added comment "//" to make it a valid comment

int main()
{

//Standard Output Statement
	cout<<"Welcome to this C++ Program" <<endl;
	cout<<"I have corrected all errors for this program." <<endl;
		//fix 5: added quotes to fix invalid string.

	// removed "Wait for Output Line", as it tied to the removed #include<conio.h>
//Main Function return Statement
	 return 0;
	 	 //fix 7: added "return 0;" to main
}



