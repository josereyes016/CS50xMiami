#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = GetString();
    
    if (s == NULL)
    {
        return 1;
    }
    
    int length = strlen(s);
    
    for ( int x = 0; x < length; x++)
    {
        printf("%c\n", s[x]);
    }
    
    printf("\n");
    
    return 0;
}
