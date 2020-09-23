#icnlude "base/condizionatore.h"
#icnlude "base/radiomodule.h"
#include "splitter.h"


void setup(){
	// inizializzazione modulo 
	// per la comunicazione via radio
	initRadio();	
}


void loop(){
	// variabili di supporto per la ricezione
	// via radio.
	uint8_t buffer[VW_MAX_MESSAGE_LEN];
	uint8_t buflen = VW_MAX_MESSAGE_LEN;

	if (vw_get_message(buffer, &buflen)){
		analyzeCommands(buffer);
	}
}