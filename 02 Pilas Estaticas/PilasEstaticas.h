/* 
* Cabecera que contiene la declaracion de las funciones asi como las estructuras
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAXSTACK 3 //tamanio de la pila
typedef int StackEntry;

typedef struct stack{
    int top;
    StackEntry entry[MAXSTACK];
}Stack;

void createStack(Stack*);
bool push(StackEntry, Stack*);
bool stackEmpty(Stack*);
bool stackFull(Stack*);
StackEntry pop(Stack*);
int menu();
void imprimir(Stack*);