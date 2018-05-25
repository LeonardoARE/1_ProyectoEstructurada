/*Autor: Leonardo Arellanes A rellanes  */
/*email:leoare14@gmail.com              */
/*fecha de creacion: 20-05-2018         */
/*fecha de actualizacion: 25-05-2018    */


#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50
#define TAM_BARRAS      20
#define TAM_PRECIO    12
#define TOTAL_MATERIAL  20



typedef struct

	char nombre[TAM_NOM];
	char barras[TAM_BARRAS];
	char precio[TAM_PRECIO];
}Material;



void menuPrincipal(void);
void mostrarTabla(void);
void mostrarMaterial(Material);
void detenerPantalla(void);



void mostrarListamaterial(Material [], int);
void buscarMaterial(Material []);
void actualizarMaterial(Material []);
void eliminarMaterial(Material []);


Material * eliminarUnMaterial(Material [], int);


int * ordenarAscendente(Material  [], int []);
int * ordenarDescendente(Material [], int []);


#endif
