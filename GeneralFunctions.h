/****************************************************
 * 	Author	 : Polychronopoulos
 * 	Nickname : cosm0sd3v
 *
 ****************************************************/

#ifndef __General_Functions_H__
#define __General_Functions_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	ATTEMPS 	10
#define	INPUT_SIZE	50
#define STORY_SIZE	100 

/*Declaration of the functions*/
void	PrintEntry();					/*Display simple graphics on the screen*/
void	PrintFromFile();				/*Display some extra graphics from file*/
void	PrintOptions();					/*Display the available option for the user*/
void	PrintExplanation();				/*Display a short description about the game*/
int		StartGame();					/*Start the game operation*/
void	Flushing();						/*Clear the stdin buffer*/

#endif
