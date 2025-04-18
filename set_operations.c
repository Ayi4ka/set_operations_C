#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    
    char num;
    int size = 100; //размер массивов 
    char A[100]="", B[100]="", C[100] =""; // множества 
    int step; // шаг изменения 
    int first_step;
    int second_step;
    //для допа
    char str[100] = "";
    char symbols[] = { 'а','е', 'ё', 'и', 'о', 'у', 'ы', 'э', 'ю', 'я' }; // гласные буквы в алфавитном порядке 
    const int size_mass = 100;

    int count = 0;
    int a=0, b=0;

    step=0;
    first_step=0;
    second_step=0;

    do { // действия которые может выбрать пользователь 
        printf("Здраствуй, дорогой пользователь! Выбери действие, которое ты хотел бы выполнить \n");
        printf("1 - ввод элементов множества \n");
        printf("2 - выполнение операции «объединение» \n");
        printf("3 - выполнение операции «пересечение» \n");
        printf("4 - выполнение операции поиска разности между множествами \n");
        printf("5 - выполнение операции поиска симметричной разности между множествами \n");
        printf("6 - осуществление обработки информации в соответствии с заданием \n");
        printf("7 - вывод всех элементов множества \n");
        printf("8 - выход \n");

        num = getche(); // чтение клавиатуры 
        switch (num) // оператор множесвенного выбора 
        {
        case '1': // ввод элементов множесвта 
            system("cls");
            printf("Введите значение множества А \n");
            fgets(A, size, stdin);
            printf("Введите значение множества B \n");
            fgets(B, size, stdin);
            system("cls");
            system("pause");
            break;
        case '2': // операция пересечения 
            system("cls");
            for (int i = 0; i < size; i++) 
            {
                C[i] = 0;
            }
            for (int j = 0; j < size; j++) {
                if (A[j] != NULL) {
                    C[j] = A[j];

                    step++;
                   
                }
            }
            first_step = step;
            step = 0; 
                for (int i = first_step; i < size; i++)
                {
                    if (B[step] != NULL) {
                        C[i] = B[step];
                        step++;
                    }
                    
                }
                second_step = step;
                step = 0;
                for (int j = 0; j < first_step; j++)
                {
                    for (int i = 0; i < size; i++)
                    {
                        if (C[j] == C[i] && i != j)
                        {
                            C[i] = NULL; // при одинаковых значениях убираются дубликаты
                        }
                    }
                }
                for (int i = 0; i < size; i++)
                {
                    if (C[i] != NULL)
                        printf("%c", C[i]);
                }
                printf("\n");
            system("pause");
            break;
        case '3': // операция пересечения 
            system("cls");
            for (int i = 0; i < size; i++)
            {
                C[i] = 0;
            }
            for (int j = 0; j < size; j++) {
                if (A[j] != NULL) {
                    C[j] = A[j];

                    step++;

                }
            }
            first_step = step;
            step = 0;
            for (int i = first_step; i < size; i++)
            {
                if (B[step] != NULL) {
                    C[i] = B[step];
                }
                step++;
            }
            second_step = step;
            step = 0;
            int d = 0;
            for (int j = 0; j < size; j++)
            { 
                d = 0;
                for (int i = 0; i < size; i++)
                {
                    if (C[j]==C[i] && i!=j)
                    {
                        C[i] = NULL;

                        d = 1; // если одинаковое то обнуляется и запоминается значение d
                    } 
                }
                if (d == 0) // если значение d остается равным нулю, то значения множества А тоже обнуляются 
                    C[j] = NULL;
            }
            for (int i = 0; i < size; i++)
            {
                if (C[i] != NULL)
                    printf("%c", C[i]);
            }
            printf("\n");
            system("pause");
            break;
        case '4': // операция разности 
            system("cls");

            for (int i = 0; i < size; i++)
            {
                C[i] = 0;
            }
            for (int j = 0; j < size; j++) {
                if (A[j] != NULL) {
                    C[j] = A[j];

                    step++;

                }
            }
            first_step = step;
            step = 0;
            for (int i = first_step; i < size; i++)
            {
                if (B[step] != NULL) {
                    C[i] = B[step];
                    step++;
                }
               
            }
            second_step = step;
            step = 0;

            for (int j = 0; j < first_step; j++)
            {
              
                for (int i = first_step; i < size; i++)
                {
                    if (C[j] == C[i] && j != i)
                    {
                      C[i] = NULL; // если элементы совпадают то они убираются полностью 
                      C[j] = NULL;
                    }     
                    
                } 
                
            }
            for (int i = 0; i < first_step; i++)
            {
                if (C[i] != NULL)
                    printf("%c", C[i]); // выводятся только значения множества А  
            }
            printf("\n");
            system("pause");
            break;
        case '5': // операция симметричной разности 
            system("cls");
            for (int i = 0; i < size; i++)
            {
                C[i] = 0;
            }
            for (int j = 0; j < size; j++) {
                if (A[j] != NULL) {
                    C[j] = A[j];

                    step++;

                }
            }
            first_step = step;
            step = 0;
            for (int i = first_step; i < size; i++)
            {
                if (B[step] != NULL) {
                    C[i] = B[step];
                }
                step++;
            }
            second_step = step;
            step = 0;
        
            for (int j = 0; j < size; j++)
            {
                int d = 0;
                for (int i = 0; i < size; i++)
                {
                    if (C[j] == C[i] && i != j)
                    {
                        C[i] = NULL; // если значения одинаковые, то значения и А и В обнуляются 

                        d = 1;
                    }
                }
                if (d == 1)
                    C[j] = NULL;

            }
            for (int i = step; i < size; i++)
            {
                if (C[i] != NULL)
                    printf("%c", C[i]);
            }
            printf("\n");
            system("pause");
            break;
        case '6': //выполнение доп задания 
            /*system("chcp 1251");*/ //руссификация то ломается то не ломается, вдруг эта строчка поможет 
            system("cls");
            printf("Введите строку: ");
            fgets(str, size_mass, stdin);
            printf("Вы ввели: ");
            puts(str);

            for (int i = 0; i < sizeof(symbols); i++)
            {
                while (a < size_mass) {
                    if (str[a] == symbols[i]) {
                        b++; //если гласная находится, то считается ее количество, через b
                    }
                    a++;
                }
                if (b != 0) {
                    printf("%c - %d  ", symbols[i], b);  
                }
                b = 0;
                a = 0;
            }
            printf("\n");
            printf("Отсутствующие гласные: "); //это для вывода гласных которых нет, b=0 и выводятся символы
            for (int i = 0; i < sizeof(symbols); i++)
            {
                while (a < size_mass) {
                    if (str[a] == symbols[i]) {
                        b++;
                    }
                    a++;
                }
                if (b == 0) {
                    printf("%c ", symbols[i]);
                }
                a = 0;
                b = 0;
            }

            printf("\n");
            system("pause");
            break;
        case '7': //вывод элементов множества без дубликатов 
            system("cls");
            printf("Элементы множества A:\n");
            for (int j = 0; j < size; j++)
            {
                for (int i = 0; i < size; i++)
                {
                    if (A[j] == A[i] && i != j)
                    {
                        A[i] = NULL;
                        
                    }
                    
                }
            }
            for (int i = 0; i < size; i++)
            {
                 if (A[i] != NULL)
                    printf("%c", A[i]);
            }
            printf("Элементы множества B:\n");
            for (int j = 0; j < size; j++)
            {
                for (int i = 0; i < size; i++)
                {
                    if (B[j] == B[i] && i != j)
                    {
                        B[i] = NULL;

                    }
                    
                }
            }
            for (int i = 0; i < size; i++)
            {
                if (B[i] != NULL)
                    printf("%c", B[i]);
            }
            printf("\n");
            system("pause");
            break;
        case '8': //выход из программы 
            system("cls");
            system("pause");
            return 0; 
            break;

        default:
            break;
        }
    } while (num != 8);
}