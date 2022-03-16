#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the alphabet
 *
 *print_alphabet
 * Return: Always 0 Success
 */
void print_alphabet(void)
{
	char id;
	
	for id = 'a'; id <='z'; id++)
	{
		_putchar(id);
	}
	_putchar('\n');
}
