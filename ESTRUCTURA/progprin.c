/*Autor: Leonardo Arellanes A rellanes  */
/*email:leoare14@gmail.com              */
/*fecha de creacion: 20-05-2018         */
/*fecha de actualizacion: 25-05-2018    */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"
#include "enums.h"
#include "prototipofunciones.h"


int numMaterialesConstruccion;
int main(void)
{
  Material listamaterial[TOTAL_MATERIAL];
	int opcion;



	do{
    menuPrincipal();


		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');
              printf(_TCYAN     _NEGRITA "\n\n1. G U A R D A R    L O S    M A T E R I A L E S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de materiales: " _TVERDE);
							scanf("%d", &numMaterialesConstruccion);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numMaterialesConstruccion; i++)
							{
                while(getchar() != '\n');
                listamaterial[i] = crearMaterial();
              }
              while(getchar() != '\n');
						  detenerPantalla();
							break;

			case LISTAR:
              while(getchar() != '\n');
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    M A T E R I A L E S\n\n");
              mostrarListamaterial(listamaterial, 0);
							detenerPantalla();
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    M A T E R I A L E S   A S C E D E N T E M E T E\n\n");
              mostrarListamaterial(listamaterial, 1);
							detenerPantalla();
							break;

			case LISTAR_DES:
							while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    M A T E R I A L E S    D E S C E D E N T E M E N T E\n\n");
              mostrarListamaterial(listamaterial, 2);
							detenerPantalla();
							break;

			case BUSCAR:
							while(getchar() != '\n');
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R   M A T E R I A L\n\n");
              buscarMaterial(listamaterial);
						  detenerPantalla();
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R   M A T E R I A L\n\n");
              actualizarMaterial(listamaterial);
              while(getchar() != '\n');
							detenerPantalla();
							break;

			case ELIMINAR:
							while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R   M A T E R I A L\n\n");
              eliminarMaterial(listamaterial);
							detenerPantalla();
							break;

			case SALIR:
							system("clear");
							exit(0);
		}
	}while(opcion != SALIR);

	return 0;
}
