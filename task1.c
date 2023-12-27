/*
Задача 1. Наибольшее из пяти чисел. 
Ввести пять чисел и вывести наибольшее из них. Нужно напечатать наибольшее число. 

Данные на входе: Пять целых чисел, разделенных пробелом. 4 15 9 56 4

Данные на выходе: Одно целое число. 56.
*/

#include <stdio.h>

int main(void) {
    int a, b, c, d, e, max;
    printf("Input 5 numbers: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a > b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    max = max > e ? max : e;
    
    printf("%d\n", max);
    return 0;
}