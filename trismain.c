#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "trislib.h"
#include "macrolib.h"

int main()
{
	int r=0,c=0,i=0;
	bool errore;
	int ctrl1,ctrl2;
	char opz;
	
	char grid[6][6]={
//	 1 2 3
	" | | ", // 1 
	"-----", 
	" | | ", // 2
	"-----", 
	" | | ", // 3
	};
	while(i<9){
		
		turno(&opz,i); //ogni ciclo cambia turno
		do{	
			printf("\nturno: %c",opz);
			grafic(grid);
			printf("[num da 1 a 3]\n");
			printf("inserisci riga: ");
			ctrl1=scanf("%d",&r); 
			printf("inserisci colonna: ");
			ctrl2=scanf("%d",&c);
			
			if(ctrl1==0 && ctrl2==0){
				errore=true;
			}else{
				errore=false;
			}
			stdinclear(); //pulisco canale stdin
		}while(((r>=1 || r<=3) && (c>=1 || c<=3) && controllGrid(grid,r,c)==-1) || errore==true || (r==4 || c==4)); 
		
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
