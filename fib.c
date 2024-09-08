#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int recursive(int n) {
   if (n <= 1) {
      return n;
   } else {
      return recursive(n - 1) + recursive(n - 2);
   }
}

int main(int argc, char *argv[]) {
   if (argc != 4) {
      printf("Please type in an integer, method(i or r), and filename.txt\n", argv[0]);
      return 1;
   }
   
   int number = atoi(argv[1]);
   char *method = argv[2];
   char *fileName = argv[3];

   FILE *file = fopen(fileName, "r");

   if (file == NULL) {
      printf("Could not open file %s\n", fileName);
      return 1;
   }

   int file_int;
   fscanf(file, "%d", &file_int);

   fclose(file);

   // Debugging
   // printf("%d\n", number);
   // printf("%s\n", method);
   // printf("%s\n", fileName);
   // printf("%d\n", file_int);

   int N = number + file_int;

   // Debugging
   // printf("%d\n", N);
   
   int results;

   if (strcmp(method, "r")  == 0) {
      results = recursive(N);
   } else if (strcmp(method, "r")  == 0) {
      
   } else {
      printf("Use 'r' for recursive or 'i' for iterative.\n");
      return 1;
   }

   printf("%d\n", results);

   return 0;
}