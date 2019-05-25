/*
 * #include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    for(i = 1; i < argc; i++){
        printf("arg %d %s\n", i, argv[i]);
    }

    char *states[] = {
            "Californai", "Oregon", "Washington", "Texas"
    };
    int num_states = 4;

    for(i = 0; i < num_states; i++){
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    //go through each string in argv

    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    //make strings
    char *states[] = {
            "California", "Oregon", "Washington", "Texas"
    };

    int num_states = 4;
    i = 0;
    while (i < num_states) {
        printf("states %d %s\n", i, states[i]);
        i++;
    }

    return 0;
}