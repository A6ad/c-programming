#include <stdio.h>

int main() {
    int mat1[3][3];
    int mat2[3][3];
    int sum[3][3];
    int flag = 1;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&mat1[i][j]);
    }
  }

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&mat2[i][j]);
    }
  }


  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
       sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  for (int i=0;i<3;i++)
  {
    for (int j=0;j<3;j++)
    {
        if ((i == j  && sum[i][j] != 1 ) || (i != j && sum[i][j] != 0) )
        {
           flag = 0;
        }
        else
        {
            flag = 1;           
        }
    }
  }

  if (flag)
  {
    printf("Identity\n");
  }
  else 
  {
    printf("Not identity\n");
  }
}