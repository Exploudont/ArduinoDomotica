/**
*	Modulo per la definizione della struttura che dovranno avere i comandi.
*	Il progetto in questione prevede che un comando abbia:
*		- un codice identificativo;
*		- una breve descrizione delle funzionalita' del comando.
*
*	@author		Daniele longobardi
*	@version	1.0
*	@since		21/08/2020
*/

#ifndef _COMMAND_STRUCTURE_H
	#define _COMMAND_STRUCTURE_H

struct command {
	uint8_t code;
	const char* description;
};

typedef struct command Command;

#endif