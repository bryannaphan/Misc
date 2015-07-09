/* 
 * File:   mathtutor.cpp
 * Author: bryannaphan
 * Purpose: math tutor application for adding
 * Assignment 3: Gaddis Ch 4 #8 pg 236
 * Created on July 5, 2015, 6:32 PM
 */

// system libraries
#include <iostream>
#include <iomanip> 
#include <cstdlib> 

// user libraries
// global constants
// function prototypes

using namespace std;

int main() {
	// declare variables
	short num1(1), // random number 1
	num2, // random number 2 
	result, // input answer from user
	ans; // actual answer 

	unsigned seed; // random generator seed

	// get a "seed" value from the user
	cout << "Enter a seed value: " << endl;
	cin >> seed; 

	// set the random generator seed before calling rand()
	srand(seed);

	while (num1 != 0)
	{
		num1 = 1 + rand() % 50;
		num2 = 1 + rand() % 50;

		cout << setw(4) << num1 << endl;
		cout << "+ " << num2 << endl;
		cout << "-----" << endl; 
		cin >> result; 

		sum = num1 + num2;
		
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
	}

return 0;
}

