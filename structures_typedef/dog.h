#ifndef dog_H
#define dog_H
/**
 * struct dog - structofany
 * @name: char.
 * @age: float.
 * @owner: char.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
