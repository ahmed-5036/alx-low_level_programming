#ifndef MAIN_H
#define MAIN_H

/* Define a new type struct dog with the following elements */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Print a struct dog */
void print_dog(struct dog *d);

/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/* Create a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Free dogs */
void free_dog(dog_t *d);

#endif /* MAIN_H */

