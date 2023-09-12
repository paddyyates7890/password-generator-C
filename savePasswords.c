#include "./filesInterface.c"
#include <stdio.h>
#include <string.h>
int savePassword(char *pass, char *application){
	char line[1024] = "APPLICATION: ";
 	strcat(line, application);
	
	char *tmp_text = " PASSWORD: ";
	strcat(line, tmp_text);
	printf(" %s\n", pass);
	strcat(line, pass);
	
	printf("%s\n", line);
	write_line(line);
	return 1;
}
