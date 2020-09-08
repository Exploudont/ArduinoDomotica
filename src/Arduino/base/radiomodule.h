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
void initRadio() {
	/* SETTAGGIO COMUNICAZIONE WIRELESS */
	LOG("Start to Setup Radio Module...");
	
	// trasmissione
	LOG("Setup Sender Pin");
	vw_set_tx_pin(SENDER_PIN);
	LOG("Sender Pin completed.");
	
	// ricezione
	LOG("Setup Reciver Pin");
	vw_set_rx_pin(RECIVER_PIN);
	LOG("Reciver Pin completed.");
	
	
	// velocita' tramissione
	LOG("Setup Trasmission Speed");
	vw_setup(BIT_PER_SECOND);
	LOG("Trasmission Speed completed.");
	
	
	// inizializzazione processo ricezione
	LOG("Start Radio Deamon");
	vw_rx_start();
	LOG("Radio Deamon successfully started.");
}



#endif