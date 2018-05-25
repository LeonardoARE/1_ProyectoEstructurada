/*Autor: Leonardo Arellanes A rellanes  */
/*email:leoare14@gmail.com              */
/*fecha de creacion: 20-05-2018         */
/*fecha de actualizacion: 25-05-2018    */

#include <string.h>
#include "prototipofunciones.h"

extern int numMaterialesConstruccion;

int * ordenarAscendente(Material listamaterial[], int arrayTemp[])
{
  for(int i = 0; i < numMaterialesConstruccion; i++)
  {
    for(int j = i + 1; j < numMaterialesConstruccion; j++)
    {
      if(strcmp(listamaterial[arrayTemp[i]].nombre, listamaterial[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Material listamaterial[], int arrayTemp[])
{
  for(int i = 0; i < numMaterialesConstruccion; i++)
  {
    for(int j = i + 1; j < numMaterialesConstruccion; j++)
    {
      if(strcmp(listamaterial[arrayTemp[i]].nombre, listamaterial[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
