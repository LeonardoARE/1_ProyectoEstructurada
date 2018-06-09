/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_BARRAS      20        /* Tamanio de la matricula del alumno                */
#define TAM_PRECIO    12        /* Tamanio de la fecha de nacimiento                 */
#define TOTAL_MATERIAL  20        /* Tamanio total del alumno                          */



typedef struct
{
	char nombre[TAM_NOM];
	char barras[TAM_BARRAS];
	char precio[TAM_PRECIO];
}Material;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarTabla(void);
void mostrarMaterial(Material);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de alumnos */
Material crearMaterial(void);
void mostrarListamaterial(Material *[], int);
void buscarMaterial(Material *[]);
void actualizarMaterial(Material *[]);
void eliminarMaterial(Material *[]);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarAlumno() */
Material * eliminarUnMaterial(Material *[], int);


/* Funciones que permiten ordenar los datos de los alumnos */
int * ordenarAscendente(Material  *[], int *[]);
int * ordenarDescendente(Material *[], int *[]);


#endif
