#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{   
    // Making an array
    int array[] = { 1, 2, 3, 0};
    
    
    // Finding the length of the array
    int length = strlen(array);
    
    
    // Printing the Array one element by one
    for (int i = 0; i < length; i++)
    {
        printf("%i,", array[i]);
    }
    
    
}
