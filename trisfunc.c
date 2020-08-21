#include <stdio.h>

void out(char m[][6])
{
	for(int i=0;i<6;++i){
		puts(m[i]);
	}
}
void aggiustacordinate(int *r,int *c)
{
	/*
		 1 2 3   users   pc
		" | | ", //0 --> /
		"-----", //1 --> 0 
		" | | ", //2 --> 2
		"-----", //3 --> 4
		" | | ", //4 --> /
	*/
	
	//righe
	if(*r==1){
		*r=0;	
	}else if(*r==3){
		*r=4;	
	}
	
	//colonne
	if(*c==1){
		*c=0;	
	}else if(*c==3){
		*c=4;	
	}
	
}
