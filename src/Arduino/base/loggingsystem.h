#ifndef LOGGING_SYSTEM_H
	#define LOGGING_SYSTEM_H
	
#ifdef DEBUG
	#define LOG(x) Serial.print(x)
#else
	#define LOG(x)
#endif

#endif