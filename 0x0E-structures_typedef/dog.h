#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A created for an entity dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
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
  * dog_t - a new struct defined called dog_t
  */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
