#ifndef _DOG_
#define _DOG_

/**
 * struct dog - attributes of a dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
typedef struct dog dog_t;
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
