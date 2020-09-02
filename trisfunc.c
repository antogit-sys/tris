#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "macrolib.h"

void turno(char *t,int i)
{
	if(i%2==0){
		*t='X';
	}else if(i%2==1){
		*t='O';
	}
}

void out(char m[][6])
{
	for(int i=0;i<6;i++){
		if(i==0){
			printf("1");
		}else if(i==2){
			printf("2");
		}else if(i==4){
			printf("3");	
		}
		printf("\t");
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
void grafic(char grid[][6],char c)
{
	system(PULISCI);
	printf("\n\t1 2 3\n");
	out(grid);
	
}
int controllWinner(char g[][6],char opz)
{
	if(
		//righe
		(g[0][0]==opz && g[0][2]==opz && g[0][4]==opz) ||
		(g[2][0]==opz && g[2][2]==opz && g[2][4]==opz) ||
		(g[4][0]==opz && g[4][2]==opz && g[4][4]==opz) ||
		
		//colonne
		(g[0][0]==opz && g[2][0]==opz && g[4][0]==opz) || 
		(g[0][2]==opz && g[2][2]==opz && g[4][2]==opz) || 
		(g[0][4]==opz && g[2][4]==opz && g[4][4]==opz) ||
		
		//diagonali
		(g[0][0]==opz && g[2][2]==opz && g[4][4]==opz) || 
		(g[0][4]==opz && g[2][2]==opz && g[4][0]==opz) 
		
	){
		printf("vittoria: %c",opz);
		return 0;
	}
	
return -1;
}
int controllGrid(char grid[][6],int r,int c)
{
	aggiustacordinate(&r,&c);
	
	if(grid[r][c]==' '){	
		return 0;
	}

return -1;
}
