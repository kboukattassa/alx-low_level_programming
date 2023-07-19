#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct containing information of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: A struct called dog stores information about
 * its name, age and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - Typedef for struct dog
 */
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
#endif
