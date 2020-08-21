#if __linux__	//se è un sistema linux dichiara
#	define PULISCI "clear"
#elif __APPLE__ //altrimenti se è un sistema apple dichiara
#	define PULISCI "clear"
#elif _WIN32 || _WIN64 || __CYGWIN__ || __CYGWIN32__ //altrimenti se è un sistema winzzoz dichiara
#	define PULISCI "cls"
#endif

void out(char[][6]);
void aggiustacordinate(int*,int*);
