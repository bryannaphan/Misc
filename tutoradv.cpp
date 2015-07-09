/* 
 * File:   mathtutor.cpp
 * Author: bryannaphan
 * Purpose: math tutor application using SWITCH and DO-LOOP! 
 * Assignment 3: Gaddis Ch 4 #8 pg 236
 * Created on July 5, 2015, 6:32 PM
 */

// system libraries
#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <string>  

// user libraries
// global constants
// function prototypes

using namespace std;

int main() {
	// declare variables
	int num1(1), // random number 1
	num2, // random number 2 
	result, // input answer from user
	ans; // actual answer 
	char operat, // operation + - * / 
	cont; // continue y/n? 
	bool doAgain; // do-loop 


	unsigned seed; // random generator seed

	// get a "seed" value from the user
	cout << "Enter a seed value: " << endl;
	cin >> seed; 

	// set the random generator seed before calling rand()
	srand(seed);

	do
	{
		num1 = 1 + rand() % 50;
		num2 = 1 + rand() % 50;

		cout << setw(4) << num1 << endl;

		switch (operat)
		{
			case 0:
			{	cout << "+ " << num2 << endl;
				ans = num1 + num2;
				break; 
			}
			
			case 1:
			{	cout << "- " << num2 << endl;
				ans = num1 - num2;
				break;
			}

			case 2:
			{	cout << "* " << num2 << endl;
				ans = num1 * num2;
				break;
			}

			case 3:
			{	cout << "% " << num2 << endl; 
				ans = num1 / num2; 
				break; 
			}	
		}

		cout << "-----" << endl; 
		cin >> result; 

		if (result == ans)
		{
			cout << "Correct!" << endl; 
			cout << " " << endl; 
		}

		else
		{
			cout << "Wrong. The answer is " << ans << "." << endl;
			cout << " " << endl; 
		}

		cout << "Do you want to continue? (y/n): " << endl; 
		cin >> cont;

		if (cont == 'y' || cont == 'Y')
			doAgain = true;
		else 
			doAgain = false; 
		
	} while (doAgain);

return 0;
}

