
#include <stdio.h>
int main()
{
    int counter = 1;
    char c = getchar();
    if (c == EOF)
        return 0;
    printf("%d. ", counter);
    while (c != EOF)
    {
        putchar(c);
        if (c == '\n')
        {
            c = getchar();
            if (c == EOF)
                return 0;
            counter++;
            printf("%d. ", counter);
            continue;
        }
        c = getchar();
    }
}
