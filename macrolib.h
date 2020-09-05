#if __linux__	//se è un sistema linux dichiara
#	include <stdio_ext.h>	
#	define PULISCI "clear"
#	define stdinclear() __fpurge(stdin)
#elif __APPLE__ //altrimenti se è un sistema apple dichiara
#	include <stdio_ext.h>
#	define PULISCI "clear"
#	define stdinclear() __fpurge(stdin)
#elif _WIN32 || WIN64 || CYGWIN || CYGWIN32__ //altrimenti se è un sistema winzzoz dichiara
#	define PULISCI "cls"
#	define stdinclear() fflush(stdin)
#endif



