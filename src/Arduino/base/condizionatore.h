#ifndef _CONDIZIONATORE_H
	#define _CONDIZIONATORE_H

#define PIN_ACCENSIONE 

/*
*	Accende l'impianto di condizionamento.
*	Viene utilizzata una MACRO.
*/
#define acccendiCondizionatore() digitalWrite(PIN_ACCENSIONE, HIGH)

/*
*	Spegne l'impianto di condizionamento.
*	Viene utilizzata una MACRO.
*/
#define spegniCondizionatore() digitalWrite(PIN_ACCENSIONE, LOW)

#endif