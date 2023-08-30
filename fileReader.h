#include <stdio.h>

#ifndef _file_h
#define _file_h

#define WORDS_FILE "/path/to/nouns.txt"

static FILE *open_file();
char* read_line(int line);
static void close_file(FILE *file);

#endif 
