#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main (void)
{
    char arrayl[] = { 'a', 'b', 'c'};
    
    char arrayu[] = { 'A', 'B', 'C'};
    
    for ( int i = 0; i < 3; i++)
    {
        printf("%i\n", arrayl[i] - arrayu[i]);
    }
    
    return 0;
}
