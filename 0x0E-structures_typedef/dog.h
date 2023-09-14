#ifndef DOG
#define DOG
/**
 * struct dog - structure containing info of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
#endif

#ifndef FUNC
#define FUNC
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
