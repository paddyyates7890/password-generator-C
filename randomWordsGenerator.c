#include "./fileReader.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * genPassword(){
	srand(time(0));
	int line1 = (rand() % 6801) + 1;
	int line2 = (rand() % 6801) + 1;

	char *pass1 = read_line(line1);
	printf("%s", pass1);
	char *pass2 = read_line(line2);
	printf("%s", pass2);
	printf("\n");

	return strcat(pass1, pass2);
}
