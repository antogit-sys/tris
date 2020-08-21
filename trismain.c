#include <stdio.h>
#include <stdlib.h>
#include "trislib.h"

int main()
{
	int r=0,c=0,i=0;
	char opz;
	char grid[5][6]={
  // 1 2 3
	" | | ", 
	"-----", 
	" | | ", 
	"-----", 
	" | | ", 
	};

	while(1){
		system(PULISCI);
		out(grid);
		printf("inserisci riga: ");
		scanf("%d",&r);
		printf("inserisci colonna: ");
		scanf("%d",&c);
		
		if(i%2==0){
			opz='X';
		}else if(i%2==1){
			opz='O';
		}
		aggiustacordinate(&r,&c);
		grid[r][c]=opz;
		grid[r][c]=opz;
		i++;
	}
return 0;
}
