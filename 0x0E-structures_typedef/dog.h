#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Poppy identifcation data
 * @name:name of the dog
 * @age:age of the dog
 * @owner:the dog owner name
 *
 * Description:all the data or attributes that stores structre of a  dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

