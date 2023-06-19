#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct name
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
