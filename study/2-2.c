#include <stdio.h>

int getline(char s[], int lim)
{
	int c, i;
	
	i = 0;
	while (--lime > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i, j, k;
	
	for (i = 0; s[i] != '\0'; i++) {
		for (j=i, k=0; t[k] !='\0'; i++
	
