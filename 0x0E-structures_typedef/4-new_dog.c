#include <stdlib.h>
#include "dog.h"
/**
 *_strlen - Returns the length of a string
 * @str: String to count
 *
 * Return: len_of_str
 */

static int _strlen(char *str)
{
	int len = 0;

	while (*(str + (++len)) != '\0')
		;
	return (len);
}
/**
 *_strcpy - copies str
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: void
 */

static char *_strcpy(char *dest, char *src)
{
	int s_i = 0;

	while (*(src + s_i) != '\0')
	{
		*(dest + s_i) = *(src + s_i);
		s_i++;
	}
	dest[s_i++] = '\0';
	return (dest);
}
/**
 * new_dog - copy constructor
 * @name: name field
 * @age: age field
 * @owner: owner field
 * Return: pointer to copied constructed dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	/* Prepare where to store given args */
	unsigned int name_l, owner_l;
	dog_t *new;

	/* Handle caller args */
	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		owner_l = _strlen(owner) + 1;
		new = malloc(sizeof(dog_t));
		/* Handle malloc exceptions */
		if (new == NULL)
			return (NULL);
		new->name = malloc(sizeof(char) * (name_l + 1));
		/* Handle malloc exceptions */
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		new->owner = malloc(sizeof(char) * (owner_l + 1));
		/* handle owner field nullity */
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
		/* Copy initialize the struct */
		new->name = _strcpy(new->name, name);
		new->owner = _strcpy(new->owner, owner);
		new->age = age;
	}
	return (new);
}
