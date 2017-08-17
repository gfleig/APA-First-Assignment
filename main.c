#include <stdio.h>
#include <stdlib.h>
#include "sorting_selection.h"

#define AR_SIZE 20

int scrambled[AR_SIZE] = { 20, 8, 1, 9, 18, 15, 7, 11, 6, 3,
                      12, 4, 2, 10, 19, 5, 13, 16, 14, 17};

void insertionSort(int ar[], int lenght)
{
    int i, j, aux;

    for(j = 1; j < lenght; ++j)
    {
        aux = ar[j];

        for(i = j - 1; i >=0 && aux < ar[i]; --i)
        {
            ar[i + 1] = ar[i];
        }

        ar[i + 1] = aux;
    }
}

void selectionSort(int ar[], int lenght)
{
    int i, j, indice, maior;

    for(i = lenght - 1; i > 0; --i)
    {
        maior = ar[0];

        indice = 0;

        for( j = 1; j <= i; ++j)
        {
            if( ar[j] > maior)
            {
                maior = ar[j];
                indice = j;
            }
        }
        ar[indice] = ar[i];
        ar[i] = maior;
    }
}

void bubbleSort(int ar[], int lenght)
{
    int i, aux;
    int sorted = 0;

    while(!sorted)
    {
        sorted = 1;

        for(i = 0; i < lenght - 1; i++)
        {
            if( ar[i] > ar[i + 1] )
            {
                sorted = 0;

                aux = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = aux;
            }
        }
    }
}

void printArray(int ar[])
{
    printf("[");
    int i;
    for( i = 0; i < AR_SIZE; i++)
    {
        if( i == AR_SIZE - 1)
        {
            printf("%d", ar[i]);
            continue;
        }
        printf("%d, ", ar[i]);
    }
    printf("]\n");
}

int main()
{
    short choice;

    printf(",.~* Welcome to Gabriel Fleig's Single Source File Sorting Realm! *~., \n\n");
    printf("Choose the sorting method to be used:\n\t1)Bubble Sort\n\t2)Selection Sort\n\t3)Insertion Sort\n");

    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printArray(scrambled);
            bubbleSort(scrambled, AR_SIZE);
            printArray(scrambled);
            break;
        case 2:
            printArray(scrambled);
            bubbleSort(scrambled, AR_SIZE);
            printArray(scrambled);
            break;
        case 3:
            printArray(scrambled);
            bubbleSort(scrambled, AR_SIZE);
            printArray(scrambled);
            break;
        default:
            printf("\nI wonder if Fleig actually implemented separated \nsorting methods or this is just a pretty facade.\n\n");
            break;
    }

    return 0;
}
