// gcc -fno-stack-protector -o ret2plt ret2plt.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char desc[100];
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stdout, 0, 2, 0);
    printf("I am here: %p\n", main);
    printf("#####################################################################\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ dont crash");
    printf("\nEnter desc: ");
    scanf("%s", desc);
    printf("Success!\n");
    return 0;
}
