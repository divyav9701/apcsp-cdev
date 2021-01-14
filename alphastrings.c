#include <stdio.h>
#include <string.h> 

void  main() 
{
  char str1[27];
  for (int i = 0; i <26; i++){
   char b = 'a' + i;
   str1[i] = b;
  }
 

  char str2[] = "abcdefghijklmnopqrstuvwxyz";
  
  if (strcmp(str1, str2) == 0)
  printf("The strings are identical\n");
   else
     printf("The strings are different\n"); 
 
 for (int i = 0; i< strlen(str1); i++){
   str1[i] -= 32;
 }
  

 if (strcmp(str1, str2) == 0)
  printf("The strings are identical\n");
   else
    printf("The strings are different\n");

 char str3[52] ;
 strcpy(str3, str1);
 strcat(str3, str2);

 printf( " string 1: %s\n string 2: %s\n string 3: %s\n", str1, str2, str3);

}
