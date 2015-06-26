#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = GetString();
    
    if (s == NULL)
    {
        return 1;
    }
    
    printf("%s\n",s);
    
    return 0;
}
