#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
int main() {
    char terminar[]="00"; 
    char buffer[100];
    char *ptr;   /*apuntador que contendrá la dirección de la memoria
    donde se almacenarán en forma dinámica cada una de las cadenas tecleadas. */
    ptr = malloc(1);   /*asigna un bloque de memoria en el montón. */ 
	strcpy(ptr, " ");   /* recibe primero la string donde se va a copiar el contenido, 
	y segundo la string del cual será copiado su contenido. */
    printf("Teclee n lineas de texto (para terminar teclee 00): \n");
    while (strcmp(buffer, terminar)!=0){
        gets (buffer);
        if (strcmp(buffer, terminar)==0)
        {
            
            break;
        }
        strcat(buffer, " ");
        realloc(ptr, strlen(buffer));
        strcat(ptr, buffer);

    }
        printf ("Resultado: %s\n", ptr);
    return 0;
}
