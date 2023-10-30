#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it
 * @filename: pointer
 * @letters: size of letters
 * Desc: Write a function that reads a text file
 * and prints it to the POSIX standard output
 * Return: 0 if NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);
	w = write(STDOUT_FILENO, text, let);

	close(file);
	return (w);
}
