#include <stdio.h>

/**
* main: the main function of the program
* void: empty parameter list for main
* Description: Prints the lower case alphabets fro a to z
* return: 0 for succes 
*/
int main(void)
{	char alph = 'a';
	
	while (alph <= 'z') {
		putchar(alph);
		alph++;
	}
		putchar('\n');
return (0);
}
