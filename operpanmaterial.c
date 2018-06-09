

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nC O N  T R O L   D E   M A T E R I A L E S   D E    C O N S T R U C C I O N" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Guardar los material");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de material");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de material Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de material Ascendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar material");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar material");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar material");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarTabla(void){
  printf(_TAZUL     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|", "NOMBRE", "CODIGO DE BARRAS", "PRECIO");
  printf("\n----------------------------------------------------------------\n");
}

void mostrarMaterial(Material *material)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|", *material.nombre, material.barras, material.precio);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
