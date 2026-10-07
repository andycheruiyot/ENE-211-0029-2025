#include <stdio.h>
#include <stdlib.h>

int main()
{
    int correctPin=1000;
    int userPin;
    int count=0;

    while (count<3)
        {
    printf("Enter your userPin\n");
    scanf("%d", &userPin);

    if (userPin<1000 || userPin>9999)
    {
        count++;
        printf("Pin should be 4 digits\n");
        printf("Attempts remaining: %d\n", 3 - count);
        continue;
    }
    if (userPin==correctPin)
    {
        printf("access granted\n");
        break;
    }
    else
        {
           count++;
            printf("access denied\n");
            printf("Attempts remaining: %d\n", 3 - count);

    }

        }
    if (count == 3)
    {
        printf("Too many attempts. Door locked!\n");
    }
    return 0;
}
