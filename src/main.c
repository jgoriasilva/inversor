/* Data de submissao: 17/03/2020
 * Nome: João Antônio Gória Silva
 * RA: 199567
 */

#include <stdio.h>
const int tam_buffer=100;

int main() {
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  char auxbuffer[tam_buffer];
  int i = 0, letras = 0;
  while(buffer[i] != '\n' && buffer[i] != '\0'){
    printf("b\n");
    letras = 0;
    while(buffer[i] != '\n' && buffer[i] != ' '){
      letras++;
      i++;
      printf("a\n");
    }
    printf("letras = %d\n", letras);
    printf("i = %d\n", i);
    auxbuffer[i] = buffer[i];
    for(int j = i-letras;j<i;j++)
      auxbuffer[j] = buffer[i-(j-(i-letras))-1];
    i++;
  }
  auxbuffer[i] = '\0';
  printf("%s", auxbuffer);
  return 0;
}
