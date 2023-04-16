#ifdef __Cplusplus
extern "c" {
#endif

#include <stdint.h>
/**
 * @brief Define tamaño de los campos
 *
 */
#define SIZE 60

//! Estructura para almacenar datos de un alumno
typedef struct alumno_s {
    char apellido[SIZE]; //!< almacena el apellido
    char nombre[SIZE];   //!< almacena el nombre
    uint32_t documento;  //!< almacena numero de documento
} * alumno_t;

/**
 * @brief
 *
 * @param alumno comento primer argumento de la funcion
 * @param cadena comento segundo argumento de la funcion
 * @param espacio comento tercer argumento de la funcion
 * @return int comento que retorna la funcion
 */

int serializar(const struct alumno_s * alumno, char cadena[], uint32_t espacio);

#ifdef _cplusplus
}
#endif