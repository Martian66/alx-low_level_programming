#include "main.h"
#include <stdlib.h>

/**
 * _realloc - e a function that reallocates a memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 *@new_size: size of newly allocated space
 *
 *Return: Pointer to newly allocated space in memory or NULL if fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, max = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
p = malloc(new_size);
return (p);

}

else if (new_size == 0)
{
free(ptr);
return (NULL);

}

else if (new_size == old_size)
return (ptr);

p = malloc(new_size);
if (p == NULL)
return (NULL);

if (new_size > old_size)
max = old_size;

for (i = 0; i < max; i++)
p[i] = oldp[i];
free(ptr);

return (p);
}

