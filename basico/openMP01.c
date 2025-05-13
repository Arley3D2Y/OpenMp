/* Autor: Arley Bernal Muñetón
   Programa: openMP01.c
   Fecha: 13 de mayo 2025
   Tema: Programación Paralela - Introducción OpenMP
   =====
   Resumen:
   * Programa crea hilos de ejecución para cada core imprime
   * cadena de caracteres por cada llamada.
*/

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        printf("OpenMP ejecutado con %d hilos.\n", omp_get_max_threads());
        #pragma omp parallel
        { // Code here will be exacuted by all threads
                printf("Hello World desde el thread %d\n", omp_get_thread_num());
        }

        return 0;
}
