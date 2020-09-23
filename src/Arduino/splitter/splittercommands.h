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
enum CommandsSplitter {
	Open = 0;
	Close = 1;
};

Command commands[NUM_COMMANDS] = {
	{(uint8_t)Open, "Open Splitter"},
	{(uint8_t)Close, "Close Splitter"}
};

/*
*	Apre lo splitter per l'aria.
*	Viene utilizzata una MACRO.
*/
#define OpenSplitter() digitalWrite(OPEN_PIN, HIGH)

/*
*	Chiude lo splitter per l'aria.
*	Viene utilizzata una MACRO.
*/
#define CloseSplitter() digitalWrite(CLOSE_PIN, LOW)

/*
*	Analizza i comandi inviati ed esegue le istruzioni.
*/
void analyzeCommands(uint8_t* buffer){
	switch(buffer[0])
	{
		case Open:
				acccendiCondizionatore();
				OpenSplitter();
				break;
							
		case Close:
				spegniCondizionatore();
				CloseSplitter();
				break;
	}
}

#endif