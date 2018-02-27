/********************************************
 * Author	:  Polychronopoulos
 * Nickname	:  cosm0sd3v
 * ******************************************/

#include "GeneralFunctions.h"

int main(void)
{
	PrintEntry();
	PrintOptions();
	
	int option = -1;
	int ret_scanf = -1;
	while((ret_scanf = scanf(" %d", &option)) == 1)
	{
		switch (option) {
			case 1:;
				int status = -1;
				status = StartGame();
				if(status == 0)	/*Win*/
				{
				}
				else if(status == 1)	/*Lose*/
				{
				}
				else	/*Something wrong*/
				{
				}
				break;
			case 2:
				PrintExplanation();
				PrintOptions();
				continue;
			case 3:
				break;
			default:
				printf("\n#Please give one of the available options.\n");
				PrintOptions();
				continue;
		}/*switch*/	
		if(option == 1 || option == 3)
			break;
	}/*while*/
	
	if(ret_scanf == 0)
	{
		printf("\n#OOPS, input wrong format.\n");
		printf("Exiting from the game...\n");
		return 1;
	}
	
	if(option == 1)		/*Exit after playing*/
		printf("\n#Thank you for the gaming. Bye Bye.\n");
	else
		printf("\n#Exiting...\n");

	return 0;
}
