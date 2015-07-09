/* 
 * File:   call.cpp
 * Author: bryannaphan
 * Purpose: 
 * Assignment 3: Savitch Ch 3 #1 pg 174
 * Created on July 4, 2015, 4:15 PM
 */

// system libraries
#include <iostream>
#include <string> 
// user libraries
// global constants
// function prototypes

using namespace std;

int main() {
	// declare variables
	float wkdy_dy, // Mon-Fri 8am-6pm rate = $0.40/min
	wkday_nght, // Mon-Fri 6pm-8am rate = $0.25/min
	wknd, // Sat-Sun rate = $0.15/min 
	calltm, // call time 
	calldur; // call duration or call length
	
	string day;

	cout << "Please enter the day of the call: " << endl;
	cin >> day; 

		if (day == str('Sa') || day == str('sa')
		{
			cout << "hi" << endl; 

		}


		cout << "Enter the time the call started: " << endl;
		cin >> calltm; 
		cout << "Enter the length of the call in minutes: " << endl;
		cin >> calldur; 
	


return 0;
}

