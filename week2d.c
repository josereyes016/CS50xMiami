#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

string even_or_odd(int newnum);// function prototype

int main(void) // start 
{
    int num = GetInt(); // get input from user
    
    string a = even_or_odd(num); // pass input to function ********
    
    printf("%s\n", a); >>>>>>>
    
    return 0;
}

string even_or_odd(int newnum) **********
{
    string answer; // return type
    
    if( newnum%2 == 0) // 
    {
        answer = "This number is even"; // stroing the string in the variable answer
    }
    else
    {
    
        answer = "This number is odd"; // stroing the string in the variable answer
    }

    return answer; // return answer >>>>>>>
}


