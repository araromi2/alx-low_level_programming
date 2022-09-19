#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *pass = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];
	int i, n;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		n = rand() % 62;
		password[i] = pass[n];
	}
	printf("%s\n", password);
	return (0);
}

