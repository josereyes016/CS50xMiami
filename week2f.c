#include <stdio.h>
#include <cs50.h>
#include <string.h>

string ceaser( int x); // function prototype

int main(void) // start
{
    int shift;
    do
    {
        printf("Please enter a positive int: ");
        shift = GetInt();
        
    }
    while(shift < 1);
    
    printf("%s\n",ceaser(shift));
    
    return 0;
}

string ceaser( int x)
{

    printf("Enter a message you want to hide: ");
    
    string hide = GetString(); // fixed
    
    if ( hide == NULL)
    {
        return "You suck";
    }
    
    for ( int i = 0, y = strlen(hide); i < y; i++)
    {
        hide[i] = hide[i] + x;
    }
    
    return hide;

}
