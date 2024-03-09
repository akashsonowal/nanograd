#include <stdio.h>
#include <stdlib.h>

struct Humanoid {
    char dna[50];
    int age;
    float weight;
};

int main(){
    int lucky = 2;
    char hello[] = "Hi Mom!";
    char *str = malloc(4);

    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'y';
    str[3] = '\0';

    free(str);

    printf("Value: %i \n", lucky);
    printf("Address: %p \n", &lucky);
    return 0;
}
