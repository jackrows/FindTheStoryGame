/***************************************
 * Implement the functions
 ***************************************/

#include "GeneralFunctions.h"


/**/
int StartGame()
{
	/*Variable*/
	int		ret = -1;					/*Store the returned value*/
	char	*user_input = NULL;			/*Store the sentence of user*/
	char	*story = NULL;				/*Store the final story*/
	int		size_input = INPUT_SIZE;	/*Store the size of input and resize if needed*/
	int 	size_story = STORY_SIZE;	/*Store the size of story and resize when needed*/
	
	user_input = malloc(sizeof(char) * size_input);
	story = malloc(sizeof(char) * size_story);
	if(user_input == NULL || story == NULL)
	{
		printf("\n#ERROR - Memory problems on alocated space.\n");
		return ret;
	}
	
	
	
	return ret;
}

/*Clean up the input buffer of stdin*/
void Flushing()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

/*Display some graphics on the screen*/
void PrintEntry()
{
	int i = 0, times = 5, spaces = 100;
	
	for(i = 0; i <= spaces; i++)
		printf("=");
		
	printf("\n");
	for(i = 1; i < times; i++)
	{
		printf("%*s", i, "\\" );
		printf("%*s", spaces, "/");
		printf("\n");
		spaces -= 2;
	}
	spaces = 94;
//	printf("%*s\n", 28, "FIND THE STORY GAME");
	PrintFromFile();	
	for(i = times-1; i > 0; i--)
	{
		printf("%*s", i, "/");
		printf("%*s", spaces, "\\");
		printf("\n");
		spaces +=2;
	}
	spaces = 100;
	for(i = 0; i <= spaces; i++)
		printf("=");
}

/*Display graphics from a txt file*/
void PrintFromFile()
{
	char buf[10];
	char *filename = NULL;
	filename = "FindTheStory.txt";
	FILE* fp = fopen(filename, "r");
	//FILE* fp = fopen("C:\\Users\\a.polychronopoulos\\Documents\\GIT\\projects\\FindTheStoryGame\\FindTheStory.txt", "r");
	if(fp == NULL)
		return;
	
	while(!feof(fp))
	{
		fgets(buf, 10, fp);
		printf("%s", buf);
	}
	fclose(fp);
}

/*Display the available option for user*/
void PrintOptions()
{
	printf("\n\n\n");
	printf("#Please choose your action:\n");
	printf(" 1 - Start\n");
	printf(" 2 - About\n");
	printf(" 3 - Exit\n");
}

void PrintExplanation()
{
	printf("\n*************************************************************************\n");
	printf("  This is a game VS computer. The computer keep a story and you have to\n");
	printf(" guest this story by inserting separate sentence. If your sentence\n");
	printf(" contains into story, a bingo message while appear. Player has available\n");
	printf(" %d attemps which reduce only at non success guestings.\n", ATTEMPS);
	printf("  Player must keyboard a normal sentence. E.g.:\n");
	printf(" - I am into a spacecraft\n - I am into a dream\n - The town is in the air\n - Drive untill sleep\n");
	printf("  Use your imagination, don't afraid to write the first thing you thinking\n");
	printf(" Have fun! And good luck!\n");
	printf("***************************************************************************\n");
}
