#include "./filesInterface.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static FILE *open_file_read() {
	return fopen(WORDS_FILE, "r");
}

static FILE *open_file_write() {
	return fopen(PASS_FILE, "w");
}

static void close_file(FILE *file){
	fclose(file);
}

void fix_word(char word[512]){
	word[0] = toupper(word[0]);
	word[strcspn(word, "\n")] = '\0';
}

char* read_line(int line){
	FILE *f = open_file_read();
	int count = 0;
	char word[512];
	char *pass;
	while (fgets(word, sizeof(word), f) != NULL) {
		if (count == line) {
			fix_word(word);
			pass = word;
			return pass;
		}
		else {
			count ++;
		}
	}
	close_file(f);
	return pass;
}
