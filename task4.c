/*
Задача 4. Какое время года.

Ввести номер месяца и вывести название времени года.

Данные на входе: Целое число от 1 до 12 - номер месяца. 
Данные на выходе: Время года на английском: winter, spring, summer, autumn.

Пример №1. 
Данные на входе: 4 
Данные на выходе: spring 

Пример №2. 
Данные на входе: 1 
Данные на выходе: winter
*/
#include <stdio.h>

int main(void) {

    int num;
    printf("Input a number from 1 to 12: \n");
    scanf("%d", &num);
    
    if (num <= 0 || num > 12)
    {
        printf("Error\n");
    }
    else if (num == 12 || num <= 2)
    {
        printf("winter\n");
    }
    else if (num <= 5)
    {
        printf("spring\n");
    }
    else if (num <= 8)
    {
        printf("summer\n");   
    }
    else 
    {
        printf("autumn\n");
    }
    
    return 0;
}
