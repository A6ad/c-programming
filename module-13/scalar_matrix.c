#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int element = arr[0][0];
    int flag = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != element)
                {             // if other element is not zero then it is not scaler
                    flag = 0; // other means other than diagonal
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("scalar");
    }
    if (flag == 0)
    {
        printf(" non-scalar");
    }
    return 0;
}