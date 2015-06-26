#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int user_input;
    user_input = GetInt();
    
 /*   do 
    {
        printf("%i\n", user_input);
        user_input = user_input - 1;
    }
    while(user_input > 0);*/
    
    for ( int x = 0; x <= user_input; x++)
    {
        for ( int y = 5; y >= user_input; y--)
        {
        
            printf("This is Fun\n");
        }
    }
    
    printf(" ");
    printf("\n");

}
