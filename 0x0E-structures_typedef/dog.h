#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dictonary
 * @name: dog name
 * @age: dog age
 * @owner: dog owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 *
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
