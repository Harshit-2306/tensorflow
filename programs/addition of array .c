#include<stdio.h>
int main()
{
 int i, j,r,c, a[r][c], b[r][c], re[r][c];
 printf("enter a rows of matrices 1 : ");
 scanf("%d", &r);
 printf("enter a columns of matrices 1 : ");
 scanf("%d", &c);
 printf("element of matrices 1 : \n");
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   scanf("%d ", &a[i][j]);
  }
 }
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
  	printf("%d",a[i][j]);
  }
  printf("\n");
}
 printf("enter a rows of matrices 2 : ");
 scanf("%d", &r);
 printf("enter a columns of matrices 2 : ");
 scanf("%d", &c);
 printf("element of matrices 2 : \n");
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   scanf("%d", &b[i][j]);
  }
 }
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   scanf("%d ", &b[i][j]);
  }
 }
 return 0;
}

