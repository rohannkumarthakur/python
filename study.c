#include<stdio.h>
int main()
{-2
    int a,b, temp=0;
    
    system("cls");

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping the value of a is : a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping the value of a is : a = %d, b = %d", a, b);

    return 0;
}  






































