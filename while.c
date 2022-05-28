#include <stdio.h>

int main(void)
{
    int counter = 0;

    while (counter < 10)
    {
        counter++;
        printf("%i is now the counter\n", counter);
    }
    return 0;
}