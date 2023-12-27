/*
Задача 2. Наименьшее из пяти чисел. 
Ввести пять чисел и вывести наименьшее из них. Нужно напечатать наименьшее число. 

Данные на входе: Пять целых чисел, разделенных пробелом. 4 15 9 56 4

Данные на выходе: Одно целое число. 4.
*/

#include <stdio.h>

int main(void) {
    int a, b, c, d, e, min;
    printf("Input 5 numbers: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min = a < b ? a : b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = e;
    
    printf("%d\n", min);
    return 0;
}