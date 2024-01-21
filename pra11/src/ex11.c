#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i = 1;
    int temp = argc;
    while(--temp > 0) {
        printf("arg %d: %s\n", temp, argv[temp]);
        // argc--;
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    while(i<argc)
    {
        states[i-1] = argv[i];
        i++;

    }

    int num_states = 4;
    i = 0;  // watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}