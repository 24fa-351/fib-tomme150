#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

   printf("%d\n", number);
   printf("%s\n", method);
   printf("%s\n", fileName);
      
   fclose(file);

   return 0;
}
