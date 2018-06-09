

#include <stdio.h>
#include <string.h>


#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"


extern int *numMaterialesConstruccion;



Material crearMaterial(void)
{
  Material material;

  printf(_TBLANCO _NEGRITA "Introduce el nombre del material: "              _NNEGRITA _TVERDE);
  fgets(material.nombre, TAM_NOM, stdin);
  strcpy(material.nombre, strtok(material.nombre, "\n"));

  printf(_TBLANCO _NEGRITA "Introduce el codigo de barras del material: "           _NNEGRITA _TVERDE);
  fgets(material.barras, TAM_BARRAS, stdin);
  strcpy(material.barras, strtok(material.barras,"\n"));

  printf(_TBLANCO _NEGRITA "Introduce el precio del material: " _NNEGRITA _TVERDE);
  fgets(material.precio, TAM_PRECIO, stdin);
  strcpy(material.precio, strtok(material.precio, "\n"));

  while(getchar() != '\n');

  return material;
}




void mostrarListamaterial(Material *listamaterial[], int ordenar)
{
  int arrayTemp[*numMaterialesConstruccion];
  for(int i = 0; i < *numMaterialesConstruccion; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)
  {
    memcpy(arrayTemp, ordenarAscendente(*listamaterial, arrayTemp), sizeof(arrayTemp));
  } else if(ordenar == 2){
    memcpy(arrayTemp, ordenarDescendente(*listamaterial, arrayTemp), sizeof(arrayTemp));
  }
  mostrarTabla();
  for(int i = 0; i < *numMaterialesConstruccion; i++)
  {
    mostrarMaterial(*listamaterial[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarMaterial(Material *listamaterial[])
{
  int *opcionBuscar;
  char nombreBuscar[TAM_NOM];
  char barrasBuscar[TAM_BARRAS];

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R   M A T E R I A L\n\n");
  printf(_TCYAN     _NEGRITA "Buscar material por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. codigo de barras \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &(*opcionBuscar));

  switch(*opcionBuscar)
  {
    case _xNombre:
        while(getchar() != '\n');

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre del material: ");
        fgets(nombreBuscar, TAM_NOM, stdin);
        strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

        for(int i = 0; i < *numMaterialesConstruccion; i++)
            if(strcmp(nombreBuscar, listamaterial[i].nombre) == 0)
            {
                mostrarTabla();
                mostrarMaterial(*listamaterial[i]);
            }
            break;

      case _xcodigo_de_barras:
          while(getchar() != '\n');

          printf(_TCYAN _NEGRITA "\n\nIntroduce el codigo de barras: ");
          fgets(barrasBuscar, TAM_BARRAS, stdin);
          strcpy(barrasBuscar, strtok(barrasBuscar, "\n"));

          for(int i = 0; i < *numMaterialesConstruccion; i++)
          if(strcmp(barrasBuscar, *listamaterial[i].barras) == 0)
          {
            mostrarTabla();
            mostrarMaterial(*listamaterial[i]);
          }
          break;
  }
}



void actualizarMaterial(Material *listaMaterial[])
{
  int *opcionBuscar;
  char nombreBuscar[TAM_NOM];
  char barrasBuscar[TAM_BARRAS];

  printf(_TCYAN     _NEGRITA "Buscar el material a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. codigo de barras \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &(*opcionBuscar));

  switch(*opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del material: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < *numMaterialesConstruccion; i++)
          {
              if(strcmp(nombreBuscar, *listaMaterial[i].nombre) == 0)
              {
                  mostrarTabla();
                  mostrarMaterial(*listaMaterial[i]);

                  printf("\n\n");

                  *listaMaterial[i] = crearMaterial();

                  mostrarTabla();
                  mostrarMaterial(*listaMaterial[i]);

                  break;
              }
          }
          break;

      case _xcodigo_de_barras:
          while(getchar() != '\n');

          printf(_TCYAN _NEGRITA "\n\nIntroduce el codigo de barras: ");
          fgets(barrasBuscar, 50, stdin);
          strcpy(barrasBuscar, strtok(barrasBuscar, "\n"));

          for(int i = 0; i < *numMaterialesConstruccion; i++)
          {
              if(strcmp(barrasBuscar, *listaMaterial[i].barras) == 0)
              {
                  mostrarTabla();
                  mostrarMaterial(*listaMaterial[i]);

                  printf("\n\n");

                  *listaMaterial[i] = crearMaterial();

                  mostrarTabla();
                  mostrarMaterial(*listaMaterial[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarMaterial(Material *listaMaterial[])
{
  int *opcionBuscar;
  char nombreBuscar[TAM_NOM];
  char barrasBuscar[TAM_BARRAS];

  printf(_TCYAN     _NEGRITA "Eliminar material por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "2. Codigo de barras \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &(*opcionBuscar));

  switch(*opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del material: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < *numMaterialesConstruccion; i++)
          {
              if(strcmp(nombreBuscar, *listaMaterial[i].nombre) == 0)
              {
                  mostrarTabla();
                  mostrarMaterial(*listaMaterial[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char *opEliminar;
                  while((*opEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(*listaMaterial));
                    *listaMaterial = eliminarUnMaterial(*listaMaterial, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xcodigo_de_barras:
          while(getchar() != '\n');

          printf(_TCYAN _NEGRITA "\n\nIntroduce el codigo de barras: ");
          fgets(barrasBuscar, TAM_NOM, stdin);
          strcpy(barrasBuscar, strtok(barrasBuscar, "\n"));

          for(int i = 0; i < *numMaterialesConstruccion; i++)
          {
              if(strcmp(barrasBuscar, *listaMaterial[i].barras) == 0)
              {
                  mostrarTabla();
                  mostrarMaterial(*listaMaterial[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char *opcEliminar;
                  while((*opcEliminar = getchar()) == 's')
                  {
                      *listaMaterial = eliminarUnMaterial(*listaMaterial, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Material * eliminarUnMaterial(Material *listamaterial[], int posicion)
{
  if(posicion < (*numMaterialesConstruccion - 1))
  {
    for(int j = posicion; j < *numMaterialesConstruccion-1; j++)
    {
      strcpy(*listamaterial[j].nombre,          *listamaterial[j+1].nombre);
      strcpy(*listamaterial[j].barras,          *listamaterial[j+1].barras);
      strcpy(*listamaterial[j].precio,          *listamaterial[j+1].precio);

    }
  }

  strcpy(*listamaterial[*numMaterialesConstruccion-1].nombre,          "");
  strcpy(*listamaterial[*numMaterialesConstruccion-1].barras,       "");
  strcpy(*listamaterial[*numMaterialesConstruccion-1].precio, "");


  *numMaterialesConstruccion--;

  printf("\n\nEl registro ha sido eliminado.\n\n");

  return *listamaterial;
}
