#include <ctype.h>
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (islower(c))
    {
        c = toupper(c);
    }
    else if (isupper(c))
    {
        c = tolower(c);
    }
    printf("%c\n", c);
    return 0;
}