#ifndef DOG
#define DOG
/**
 * struct dog - structure containing info of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
