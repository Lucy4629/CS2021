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

<<<<<<< HEAD

          if() {
=======
          printf("%d %d %d %d", abs(a-b), a*b, a/b, a%b);
          
          if(a > b) {
>>>>>>> b0f9b819169812c30f6d0afb4327b1a8c6e13773
               printf("%d ", a);
          } else {
               printf("%d ", b);
          }

<<<<<<< HEAD
          if() {
=======
          if(a == b) {
>>>>>>> b0f9b819169812c30f6d0afb4327b1a8c6e13773
               printf("%d \n", 1);
          } else {
               printf("%d \n", 0);
          }

     }

     fclose(infile);                         /* close input file */
}
