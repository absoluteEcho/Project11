#include <stdio.h>
#include  "box.h"
#include <stdlib.h>
#include <unistd.h> 


// This file is called 'test.c' but this most likely will be the main file. 
// Enojoy this little silly quiz of mine.

int main(int argc, char argv[])
{	
	if (argv[1] == "-pg")
	{	
		char i[]; 
		char yi[1]; 
		printf("\n");
		printf("Welcome to the Historical Guesser!\n");
		printf("This quiz will be using y/n as input, anything else\n""will be ignore.\n");
		printf("Press any key to continue..\n");
		scanf("%1s", i);
		// clever ;) 
		sleep(1);
	       	printf(".")
		sleep(1);
		printf("."); 
		sleep(1);
		printf(".\n");	
		sleep(1);
		printf("Is your location in South America? (ᵔ ͜ᵔ)\n");
		scanf("%s", yi);
		if (strcmp(yi, "y")==0)
		{ 
			printf("Is your location a City?");
			scanf("%s", yi);
			if (strcmp(yi, "y") == 0)
			{
				printres("1"); 
			}
		}
	} 
}
