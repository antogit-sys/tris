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
	int z=0;
	while(i<9){
		
		turno(&opz,i); //ogni ciclo cambia turno
		do{	
			printf("\nturno: %c",opz);
			grafic(grid);
			printf("[num da 1 a 3]\n");
			printf("inserisci riga: ");
			scanf("%d",&r);
			printf("inserisci colonna: ");
			scanf("%d",&c);

		}while((r>=1 || r<=3) && (c>=1 || c<=3) && controllGrid(grid,r,c)==-1);
		
		aggiustacordinate(&r,&c);
		grid[r][c]=opz;
		
		if(controllWinner(grid,opz)!=-1 && i>3){
			grafic(grid);
			return 0;
		}
		i++;
	}
	grafic(grid);
	printf("\npareggio\n");

return 0;
}
