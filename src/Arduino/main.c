#include "splitter.h"
#include <stdio.h>

void ShowMenu(){
	for(int i=0; i<NUM_COMMANDS; i++)
		printf("%u - %s\n", commands[i].code, commands[i].description);
}

int main(){
	ShowMenu();
	
	return 0;
}