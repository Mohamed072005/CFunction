#include <stdio.h>
#include <stdlib.h>

int pgcd(a, b);
int main()
{
    int a,b;
    printf("Enter the first number here: \n\t");
    scanf("%d", &a);
    printf("Enter the second number here: \n\t");
    scanf("%d", &b);


    pgcd(a, b);

    return 0;


}
int pgcd(a, b)
{

    if(a == 0 || b == 0)
    {
        return 0;
    }

    if(a > b)
    {
        a = a - b;
    }
    else
    {
        b = b - a;
    }
    if(a == b)
    {
        printf("The GCD: %d", a);
    }
    return pgcd(a, b);

}



