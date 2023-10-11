#include <stdio.h>
#include <stdlib.h>
#include "./randomStringGenerator.c"
#include "./randomWordsGenerator.c"
#include "./savePasswords.c"

int main(int argc, char *argv[])
{	
	char *pass;
	char choice;
	char application[100];

	char header[] = "\n#################################################################################################\n#                                       password machine                                      #\n#################################################################################################\n";
	
	printf("%s \n", header);
	
	printf("generate new password (N), show saved password (S) \n");
	scanf(" %c", &choice);

	if (choice == 'N' || choice == 'n') {
		
		printf("What is the password for \n");
		scanf(" %s", application);


		printf("Do you want a completely random password (r) or a password made from words (w)\n");
		scanf(" %c", &choice);
			
		if (choice == 'r') {
			pass = genRandomPassword();
		}
		else {
			pass = genPassword();
		}

		savePassword(pass, application);
		free(pass);
	}
	else {
		char *fileContents = read_whole_file();
		printf("%s", fileContents);
		free(fileContents);
	}


	printf("Bye!\n");
}

