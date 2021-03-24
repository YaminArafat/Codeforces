/*#include <stdio.h>
int main()
{
    char s[50];
    scanf(" %[^\n]",s);
    printf("%s",s);
}
fscanf(fp,"%d",&a.id);
fscanf(fp,"%s",&a.name);
fscanf(fp,"%s",&a.writer);
fscanf(fp,"%d",&a.quantity);
fscanf(fp,"%f",&a.price);  */
#include <stdio.h>
#include <stdlib.h>  /* For exit() function */
int main()
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen("program.txt", "ab+");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter a sentence:\n");
   gets(sentence);
    puts(sentence);
   fprintf(fptr,"%s ", sentence);
   fclose(fptr);

   return 0;
}
