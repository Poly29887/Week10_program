#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num[3];

void arrange();
int main()
{
    int i;
    char order[4],*p;
    printf("Input 3 numbers : ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    p = order;
    printf("Input ABC : ");
    scanf("%s",order);
    while (*p != '\0')
    {
        if ((*p != 'A')&&(*p != 'B')&&(*p != 'C'))
        {
            printf("Input ABC : ");
            scanf("%s", order);
            p = order;
            continue;
        }
        p++;
    }
    arrange();
    printf("Output : ");
    for (i = 0; i < 3; i++)
    {
        if (order[i] == 'A')
        {
            printf("%d ", num[0]);
        }
        else if (order[i] == 'B')
        {
            printf("%d ", num[1]);
        }
        else if (order[i] == 'C')
        {
            printf("%d ", num[2]);
        }
    }
}

void arrange()
{
    int j,k,temp;
    for (j = 0; j < 2; j++)
    {   
        for (k = j; k <3 ; k++)
        {
           if (num[j] > num[k])
           {
            temp = num[j];
            num[j] = num[k];
            num[k] = temp;

           }
        }
       
    }
}