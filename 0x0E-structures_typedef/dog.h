#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - contains information about a dog
 * @name: name of the dog
 * @age: age of thw dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
int _strlen(char *);
char *_memcpy(char *, char *, unsigned int);
void free_dog(dog_t *);

#endif
