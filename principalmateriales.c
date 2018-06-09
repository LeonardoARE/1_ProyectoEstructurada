
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colres            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

                        /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesAlumno.c y ordenacion.c          */
int *numMaterialesConstruccion;
int main(void)
{
  Material *listamaterial[TOTAL_MATERIAL];    /* Declaracion de una variable de arreglo de estructura alumno[]       */
	int *opcion;                          /* Variable que ontrola las opciones del menu principal.               */
  /* int listamaterial[20]; */


	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &(*opcion));

		switch(*opcion)
		{
			case CREAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. G U A R D A R    L O S    M A T E R I A L E S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de materiales: " _TVERDE);
							scanf("%d", &(*numMaterialesConstruccion));
							printf("\n\n" _ARESET);

							for(int i = 0; i < *numMaterialesConstruccion; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
                *listamaterial[i] = crearMaterial();   /* Se invoca a la funcion crearNuevoAlumno() implementada en operacionesAlumno.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    M A T E R I A L E S\n\n");
              mostrarListamaterial(*listamaterial, 0);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    M A T E R I A L E S   A S C E D E N T E M E T E\n\n");
              mostrarListamaterial(*listamaterial, 1);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    M A T E R I A L E S    D E S C E D E N T E M E N T E\n\n");
              mostrarListamaterial(*listamaterial, 2);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R   M A T E R I A L\n\n");
              buscarMaterial(*listamaterial);
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R   M A T E R I A L\n\n");
              actualizarMaterial(*listamaterial);           /* Se invoca a la funcion actualizarAlumno() implementada en operacionesAlumno.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R   M A T E R I A L\n\n");
              eliminarMaterial(*listamaterial);
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(*opcion != SALIR);

	return 0;
}
