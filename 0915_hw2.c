#include <stdio.h>
#include <stdlib.h>

int main (void) {

     FILE *infile;
     int i;
     int no_cases, start, end;
     int a, b;

     infile = fopen("input.txt", "r");      
     if(infile == NULL)
          exit(1);

     fscanf(infile, "%d", &no_cases);        

     for (i = 0; i < no_cases; i++) {

          fscanf(infile, "%d %d", &a, &b);   
          printf("%d %d", a+b, a-b);         


          if() {
               printf("%d ", a);
          } else {
               printf("%d ", b);
          }

          if() {
               printf("%d \n", 1);
          } else {
               printf("%d \n", 0);
          }

     }

     fclose(infile);                         /* close input file */
}