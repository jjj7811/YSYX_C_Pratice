#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person Person_create(char *name, int age, int height, int weight)
{
    // struct Person *who = malloc(sizeof(struct Person));
    struct Person who;
    assert(&who != NULL);

    who.name = strdup(name);
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who;
}

void Person_destroy(struct Person who)
{
    assert(&who != NULL);
    printf("%d\r\n",who.age);
    free(who.name);
    // free(&who);
}

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    char test[] = "hahaah";
    // make two people structures
    struct Person joe = Person_create(
            test, 32, 64, 140);
    //to test the point of strdup
    printf("test[0] = %c\r\n",test[0]);
    test[0] = 's';
    printf("test[0] = %c\r\n",test[0]);
    struct Person frank = Person_create(
            test, 20, 72, 180);

    // print them out and where they are in memory
    printf("Joe is at memory location %p:\n", &joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", &frank);
    Person_print(frank);

    // make everyone age 20 years and print them again
    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    Person_print(joe);

    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    // destroy them both so we clean up
    Person_destroy(joe);
    Person_destroy(frank);

    return 0;
}