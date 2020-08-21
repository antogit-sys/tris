#if __linux__	//se è un sistema linux dichiara
#	define PULISCI "clear"
#elif __APPLE__ //altrimenti se è un sistema apple dichiara
#	define PULISCI "clear"
#elif _WIN32 || WIN64 || CYGWIN || CYGWIN32__ //altrimenti se è un sistema winzzoz dichiara
#	define PULISCI "cls"
#endif
