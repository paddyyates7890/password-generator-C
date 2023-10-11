#include "./filesInterface.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * genPassword(){
	srand(time(0));
	int line1 = (rand() % 6801) + 1;
	int line2 = (rand() % 6801) + 1;
	char *finalPass = malloc(1024);
	char *pass1 = read_line(line1);
	strcat(finalPass, pass1);
	char *pass2 = read_line(line2);
	strcat(finalPass, pass2);

	return finalPass;
}
