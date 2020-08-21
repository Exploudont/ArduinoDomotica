/**
*	Modulo per la definizione dei comandi adottati dal modulo dello Splitter. 
*
*	@author		Daniele longobardi
*	@version	1.0
*	@since		21/08/2020
*/

#ifndef _PLITTER_COMMANDS_H
	#define _PLITTER_COMMANDS_H

#include "../base/commandstructure.h"
#include "splitterpins.h"

#define NUM_COMMANDS 2
Command commands[NUM_COMMANDS] = {
	{0, "Open Splitter"},
	{1, "Close Splitter"}
};

void OpenSplitter();
void CloseSplitter();

void analyzeCommands(byte buffer[], byte length);

#endif