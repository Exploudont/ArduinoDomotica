#include "radiomodule.h"

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

/*
*	Trasmette i dati via radio, senza necessita' di definire la lunghezza dei dati da inviare.
*/
void send(uint8_t * data){
	send(data, (uint8_t)sizeof(data));
}

/*
*	Trasmette i dati via radio, definendo la lunghezza dei dati da inviare.
*/
void send(uint8_t * data, uint8_t length){
	vw_send(data, length);
	vw_wait_tx();
}