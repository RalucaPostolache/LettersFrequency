#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int c = 0, count[26] = { 0 }, x;

	printf("Enter a string\n");
	gets(string);

	while (string[c] != '\0') {
		/** Considering characters from 'a' to 'z'/'A' to 'Z' and ignoring others. */

		if (string[c] >= 'a' && string[c] <= 'z') {
			x = string[c] - 'a';
			count[x]++;
		}
		else if (string[c] >= 'A' && string[c] <= 'Z') {
			x = string[c] - 'A';
			count[x]++;
		}

		c++;
	}
	
	for (c = 0; c < 26; c++) {
		if (count[c] != 0) {
			printf("%c represents %d percent of the string.\n", c + 'a', (count[c] * 100 / strlen(string)));
		}
	}
	system("PAUSE");
	return 0;
}