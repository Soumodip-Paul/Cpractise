#include <stdio.h>
#include <string.h>

int main()
{	
	printf("Enter a name to get its short name : ");
	char str[100];
	gets(str);
    char splitting[] = " ";

	// Returns first token
	char *token = strtok(str, splitting);

	// Keep printing tokens while one of the
	// delimiters present in str[].
	printf("Short Name is : ");
	while (token != NULL)
	{
		printf("%c ", token[0]);
		token = strtok(NULL, splitting);
	}

	return 0;
}
