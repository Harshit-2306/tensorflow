#include <stdio.h>
int main()
{
 int arr[5],i;
 for (i = 0; i < 5; i++)
 {
  printf(" enter a element %d : ",i);
 scanf("%d",&arr[i]);
 }
 for (i = 4; i>=0; i--)
 {
  printf(" %d ",arr[i]);
}
 return 0;
}
