#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * genRandomPassword(){
	char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!£$^&*?1234567890";
	int charsSize = sizeof(characters) / sizeof(characters[0]);
	int charIndex;	
	char pass[15] = "";
	int index = 0;
	
	srand(time(0));
	
	for (int i = 0; i < 15; i++) {
		charIndex = (rand() % charsSize) + 1;
		pass[i] = characters[charIndex]; 
	}

	printf("%s \n", pass);
	char * word = pass;
	return word;
}
