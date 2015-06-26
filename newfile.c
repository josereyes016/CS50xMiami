#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string name = GetString();
    
    
    int length = strlen(name);
    
    
    
    for ( int i = 0; i < length; i++)
    {
    
        if ( tolower(name[i]) == 'y')
        {
            if ( i != 0)
            {
                name[i] = 'b';
            }
        
        }
        printf("%c", toupper(name[i]));
    
    }
    
    printf("\n");
}
