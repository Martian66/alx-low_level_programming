#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 *  including the terminating null byte (\0),
 *  @dest: destination
 *  @src: source
 *  Return: destination
 */
char *_strcpy(char *dest, char *src)
{

int inc = 0;

while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';

return (dest);

}
