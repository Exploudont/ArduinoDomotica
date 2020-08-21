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

/*
*	Viene definito unicamente per includere il typo byte
*	all'interno del progetto poichè non è presente
*	nativamente.
*/
#define LOCAL_DEBUG
#ifdef LOCAL_DEBUG
	typedef unsigned char byte;
#endif

struct command {
	byte code;
	const char* description;
};

typedef struct command Command;

#endif