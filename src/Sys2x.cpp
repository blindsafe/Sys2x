//============================================================================
// Name        : Sys2x.cpp
// Author      : Charles Yarbrough
// Version     : 0.1.0
// Copyright   : (c) 2021
// Description : Command line parser and executor
//============================================================================

#include "Sys2x.hpp"

int main() {
	const int cmd_lth = MAX_CMD_LENGTH;
	char cmd[cmd_lth] = "ignored command";
	int rep = 6;
	cout << "Sys2x is going to try more, commands may be up to " << cmd_lth
			<< " characters long " << endl;
	cout << "End input with Control-Z ENTER" << endl;

	while (strcmp(cmd, "") && (rep > 0)) {
		cout << "\nGive us something to do at rep=" << rep << ": ";
		cin >> cmd;
		--rep;
		int loc = 0;
		while (cmd[loc]) {
			if (cmd[loc] == '*')
				cmd[loc] = ' ';
			++loc;
		}
		cout << "You said to do a --> '" << cmd << "'" << endl;
		system(cmd);
	}
	cout << endl << " . . . thats all folks" << endl;
	return 0;
}
