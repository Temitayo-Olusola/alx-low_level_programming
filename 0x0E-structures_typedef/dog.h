#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: First info
 * @age: second info
 * owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
