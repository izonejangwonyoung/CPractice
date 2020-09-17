
#include <stdio.h>


int main(void)
{
    int input = 1;
    int sum = 0;

    while (input != 0)
    {
        printf("insert your number: ");
        scanf("%d", &input);
        sum += input;
    }

    printf("total is %d.\n", sum);
   
    return 0;
}