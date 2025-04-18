#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    
    char num;
    int size = 100; //������ �������� 
    char A[100]="", B[100]="", C[100] =""; // ��������� 
    int step; // ��� ��������� 
    int first_step;
    int second_step;
    //��� ����
    char str[100] = "";
    char symbols[] = { '�','�', '�', '�', '�', '�', '�', '�', '�', '�' }; // ������� ����� � ���������� ������� 
    const int size_mass = 100;

    int count = 0;
    int a=0, b=0;

    step=0;
    first_step=0;
    second_step=0;

    do { // �������� ������� ����� ������� ������������ 
        printf("���������, ������� ������������! ������ ��������, ������� �� ����� �� ��������� \n");
        printf("1 - ���� ��������� ��������� \n");
        printf("2 - ���������� �������� ������������ \n");
        printf("3 - ���������� �������� ������������ \n");
        printf("4 - ���������� �������� ������ �������� ����� ����������� \n");
        printf("5 - ���������� �������� ������ ������������ �������� ����� ����������� \n");
        printf("6 - ������������� ��������� ���������� � ������������ � �������� \n");
        printf("7 - ����� ���� ��������� ��������� \n");
        printf("8 - ����� \n");

        num = getche(); // ������ ���������� 
        switch (num) // �������� ������������� ������ 
        {
        case '1': // ���� ��������� ��������� 
            system("cls");
            printf("������� �������� ��������� � \n");
            fgets(A, size, stdin);
            printf("������� �������� ��������� B \n");
            fgets(B, size, stdin);
            system("cls");
            system("pause");
            break;
        case '2': // �������� ����������� 
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
                            C[i] = NULL; // ��� ���������� ��������� ��������� ���������
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
        case '3': // �������� ����������� 
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

                        d = 1; // ���� ���������� �� ���������� � ������������ �������� d
                    } 
                }
                if (d == 0) // ���� �������� d �������� ������ ����, �� �������� ��������� � ���� ���������� 
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
        case '4': // �������� �������� 
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
                      C[i] = NULL; // ���� �������� ��������� �� ��� ��������� ��������� 
                      C[j] = NULL;
                    }     
                    
                } 
                
            }
            for (int i = 0; i < first_step; i++)
            {
                if (C[i] != NULL)
                    printf("%c", C[i]); // ��������� ������ �������� ��������� �  
            }
            printf("\n");
            system("pause");
            break;
        case '5': // �������� ������������ �������� 
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
                        C[i] = NULL; // ���� �������� ����������, �� �������� � � � � ���������� 

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
        case '6': //���������� ��� ������� 
            /*system("chcp 1251");*/ //������������ �� �������� �� �� ��������, ����� ��� ������� ������� 
            system("cls");
            printf("������� ������: ");
            fgets(str, size_mass, stdin);
            printf("�� �����: ");
            puts(str);

            for (int i = 0; i < sizeof(symbols); i++)
            {
                while (a < size_mass) {
                    if (str[a] == symbols[i]) {
                        b++; //���� ������� ���������, �� ��������� �� ����������, ����� b
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
            printf("������������� �������: "); //��� ��� ������ ������� ������� ���, b=0 � ��������� �������
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
        case '7': //����� ��������� ��������� ��� ���������� 
            system("cls");
            printf("�������� ��������� A:\n");
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
            printf("�������� ��������� B:\n");
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
        case '8': //����� �� ��������� 
            system("cls");
            system("pause");
            return 0; 
            break;

        default:
            break;
        }
    } while (num != 8);
}