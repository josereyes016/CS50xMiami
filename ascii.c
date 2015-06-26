#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    printf("%i\n", argc);
    
    int x = atoi(argv[1]);
    
    printf("%i\n", argc + x);
}
