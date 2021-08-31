//============================================================================
// Name        : sys2.cpp
// Author      : me
// Version     :
// Copyright   : my copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pch.h"
#include <cstring>

using namespace std;

int main() {
	char cmd[20]  = "x";   // anything will do
	int   rep = 6;
	int loc;
	cout << "sys2 going to try more" << endl; // prints sys2 going to try more
	while ( strcmp(cmd, "")  && (rep > 0)) {
		cout << "give us something to do at rep=" << rep << endl;
		cin >> cmd;
		--rep;
                loc = 0; while ( cmd[loc] ) {
		    	   if ( cmd[loc] == '*' ) cmd[loc] = ' ';
		    	   ++loc; }	      
        	cout << "your said to do a --> " << cmd << endl;
       		system(cmd); }
	cout <<" thats all"  << endl;
	return 0;
}
