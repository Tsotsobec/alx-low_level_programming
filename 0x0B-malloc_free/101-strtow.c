#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_word - helper fumction to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *str);
char **strtow(char *str);

int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		} else
		{
			i++;
		}
	}
	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	int word_count = count_words(str);
	char **words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	int i = 0;
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		for (int j = 0; j < i; j++)
			free(words[j]);
		free(words);

		return (NULL);
	}
	strcpy(words[i], token);
	i++;
	token = strtok(NULL, " ");
words[i] = NULL;

return (words);
}
