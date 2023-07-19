#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character that will be checked
 * Return: 1 if c is a letter, lowercase or uppercase. Else 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
