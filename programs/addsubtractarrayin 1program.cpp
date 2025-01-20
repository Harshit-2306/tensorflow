#include<stdio.h>
int main()
{
 int r, c, arr[r][c],i,j;
 printf("enter a number of rows : ");
 scanf("%d", &r);
 printf("enter a number of columns : ");
 scanf("%d", &c);
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("enter an array [%d][%d] =  ", i, j);
   scanf("%d", &arr[i][j]);
  }
 }
  for (int i = 0; i < r; i++)
  {
   for (int j = 0; j < c; j++)
   {
    printf("%d ", arr[i][j]);
   }
   printf("\n");
  }
 return 0;
}

