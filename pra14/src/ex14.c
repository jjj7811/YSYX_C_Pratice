#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(int lens,char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    int lens = 0;
    // printf("len:%ld\r\n",strlen(*(argv+i)));

    for(i = 0; i < argc; i++) {
        lens = strlen(*(argv+i));
        print_letters(lens,argv[i]);
    }
}

void print_letters(int lens,char arg[])
{
    int i = 0;

    for(i = 0; i<lens; i++) {
        char ch = arg[i];

        if(can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}


int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}