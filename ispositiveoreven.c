#include <stdio.h>
    int main()
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            printf("%d is positive.\n", num);
        }
        else if (num % 2 == 0)
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is neither positive nor even.\n", num);
        }

        return 0;
    }