#include <stdio.h>
#include <stdlib.h>
#include"functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int choiceAdmin;
	do{
	   startTheProgram();
	   scanf("%d",&choice);
	switch(choice){
		case 1:
			do{
				menuAdmin();
				scanf("%d",&choiceAdmin);
			    	switch(choiceAdmin){
					case 1:
			          break;
			        case 2:
			          break;
	                case 3:
			          break;
			        case 4:
			          break;
			        case 5:
			          break;
			        default:
			          invalidSelection();
				}
			}while(choiceAdmin !=0);
			 break;
		case 2:			
			 break;	
		case 3:
		     break;
		case 0:
			endOfTheProgram();
			 break;	
		default:
		   invalidSelection();
	}
   }while(choice != 0);  

	return 0;

}
