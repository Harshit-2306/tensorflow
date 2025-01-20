#include <stdio.h>

int main()
{
 char str[100];
 int vowels = 0, consonants = 0;
 int i = 0;

 // Input a string
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);

 while (str[i] != '\0')
 {
  char ch = str[i];

  // if (ch >= 'A' && ch <= 'Z')
  // {
  //  ch = ch + ('a' - 'A');
  // }
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
   vowels++;
  }
  else
  {
   consonants++;
  }
 }
 printf("%d",vowels);
  printf("%d",consonants);
 return 0;
}
