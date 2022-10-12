#ifndef HEADER_
#define HEADER_

/**
 * struct dog - best friend of humankind
 * @name: doggo's name
 * @age: doggo's age
 * @owner: owner's name
 *
 * Description: The attributes of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* !Header_ */
