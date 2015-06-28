#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    printf("%i\n", argc);// print the amount of command line arguments

   /*for ( int i = 0; i < argc; i++)
   {
        printf("%s\n",argv[i]); // print every command line argument
   }*/
   
   int x = atoi(argv[1]);
                   
   int y = 1;
   
   y = y + x;
   
   printf("%i\n%i\n", x, y); // atoi() 
   
   
   
   
   
   return 0;
}
