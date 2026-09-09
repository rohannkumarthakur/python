#include <stdio.h>
int main()
{
    int pmo,mmo,total;
    printf("Enter the obtain marks of Physics: ");
    scanf("%d",&pmo);
    printf("Enter the obtain marks of Maths: ");
    scanf("%d",&mmo);

    total=(30/100*pmo)+(70/100*mmo);
    printf("The total marks are: %d",total);

    return 0;
}






