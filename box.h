#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define constant 20


void caller(char i0[20],char i1[20],char i2[20], char i3[20])
{

	printf(	
"\n" 
"<----------------|   |------------------->\n"
" | Guessed : %s		        |\n" 
" | Type : %s                           |\n" 
" | Number : %s 		        |\n"
" | Location : %s                       |\n" 
"<---------------------------------------->\n", i0, i1, i2, i3 );
           
}


void printres(char name[20])
{ 
	/*if (name == "Tenochtitlan"){
		caller("Tenochtitlan", "City", "1", "North America");	
	} */	
	switch(name)
	{ 
		case name[20] = "Tenochtitlan":
			caller("r", "f","d","a");
			break;
		default: 
			printf("adsd");
			break;
	}
}
