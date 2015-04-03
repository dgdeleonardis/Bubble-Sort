/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 3 aprile 2015, 18.21
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5
/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, temp, v[N];
    for(i = 0; i < N; i++) {
        printf("Inserisci l'elemento %d : ", i);
        scanf("%d", &(v[i]));
       }
    for(i = 0; i < (N-1); i++) {
        for(j = 0; j < (N-1-i); j++) {
            if(v[j] < v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
                
    }
    printf("Algoritmo ordinato (Bubble-Sort) : \n");
    for(i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");    
    return (EXIT_SUCCESS);
}