#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog, NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

/* Check for invalid input */
if (name == NULL || owner == NULL)
return (NULL);
/* Allocate memory for new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Copy name and owner */
name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(name_copy, name);
owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
if (owner_copy == NULL)
{
free(new_dog);
free(name_copy);
return (NULL);
}
_strcpy(owner_copy, owner);

/* Initialize new dog */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
