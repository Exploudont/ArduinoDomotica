#ifndef RADIO_MODULE_H
	#define RADIO_MODULE_H
	
// inclusione sistema di log
#include "loggingsystem.h"
// inclusione libreria per la comunicazione via radio
#include "VirtualWire.h"

/*
* Definizione valori per la comunicazione via radio.
*/
#define BIT_PER_SECOND 3000
#define RECIVER_PIN 11
#define SENDER_PIN 12

/*
* Defnizione indirizzi speciali adottati durante la comunicazione
*/
#define BROADCAST 255


/*
* Inizializza la comunicazione via Radio.
*/
void initRadio();

/*
*	Trasmette i dati via radio, senza necessita' di definire la lunghezza dei dati da inviare.
*/
void send(uint8_t * data);

/*
*	Trasmette i dati via radio, definendo la lunghezza dei dati da inviare.
*/
void send(uint8_t * data, uint8_t length);


#endif