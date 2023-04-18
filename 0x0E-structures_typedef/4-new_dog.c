#include <stdlib.h>
#include "dog.h"
/**
* new_dog - function that creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nl, l, i;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (nl = 0; name[nl]; nl++)
;
nl++;
dog->name = malloc(nl *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < nl; i++)
dog->name[i] = name[i];
dog->age = age;
for (l = 0; owner[l]; l++)
;
l++;
dog->owner = malloc(l *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < l; i++)
dog->owner[i] = owner[i];
return (dog);
}
