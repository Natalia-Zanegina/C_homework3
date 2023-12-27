/*
Задача 3. В порядке возрастания.

Ввести три числа и определить, верно ли, что они вводились в порядке возрастания. 
Данные на входе: Три целых числа.
Данные на выходе: Одно слово YES или NO 

Пример: 
Данные на входе: 4 5 17 
Данные на выходе: YES
*/ 

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b, c;
    bool result;
    
    printf("Input 3 numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    
    result = a > b || b > c ? false : true;

    if (result)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}