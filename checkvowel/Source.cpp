#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int checkvowel(char);
int main()
{
	int i = 0, j;
	char x[51];
	printf("Input your message : ");
	scanf("%s", x);
	for (j = 0; j < 51; j++)
		i += checkvowel(x[j]);
	printf("Vowel = %d", i);

	return 0;
}
int checkvowel(char j)
{
	if ((j == 'a') || (j == 'e') || (j == 'i') || (j == 'o') || (j == 'u'))
		return 1;
	else
		return 0;
}