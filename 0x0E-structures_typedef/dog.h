#define DOG_H
/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - popy
 * @name: popy name
 * @age: popy age
 * @owner: popy owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
