#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *file = fopen("file.txt", "r");
  char buffer[255];

  // fgets(buffer, 255, file);
  // printf("%s\n", buffer);

  // fgets(buffer, 255, file);
  // printf("%s\n", buffer);

  while (fgets(buffer, 255, file))
  {
    printf("%s\n", buffer);
  }

  fclose(file);

  FILE *filePointer = fopen("new_file.txt", "w+");
  fputs("Leoncio Aliaga Nuevo Archivo", filePointer);
  fclose(filePointer);



  return 0;
}
