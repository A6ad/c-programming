#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int exp;
        scanf("%d", &exp);
        if (exp < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (exp >= 1 && exp <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (exp >= 4 && exp <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else if (exp > 7)
        {
            printf("Senior candidate\n");
        }
    }
}