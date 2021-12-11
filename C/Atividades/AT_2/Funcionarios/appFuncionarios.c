// Auth: kaio Guilherme Ferraz
// date: 2021-12-10

#include "Funcionarios.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 3

// não consegui resolver esse bug de clona
int main(void)
{

    Employee *effectives[MAX_EMPLOYEES];
    int i, age, birthday, birthYear;
    char name[50], sex[1], CPF[14], cargo[30], birthMonth[10];
    float salary;

    // não consegui arrumar esse bug de copiar os dados do ultimo registro para os demais :(
    // Tentei.
    do
    {
        *effectives[i] = registerEmployee();
        printf("%p ", &effectives[i]);

        printf("Enter the employee's name >>> ");
        scanf("%s", name);
        printf("Enter the employee's age >>> ");
        scanf("%d", &age);

        printf("Enter the employee's sex(M)(F) >>> ");
        scanf("%s", sex);

        sex[0] == 'M' ? set_sex((&effectives[i]), false) : set_sex((&effectives[i]), true);

        printf("Enter the employee CPF >>> ");
        scanf("%s", CPF);

        printf("Enter the official's position >>> ");
        scanf("%s", cargo);

        printf("Enter the employee's salary >>> ");
        scanf("%f", &salary);

        printf("Enter the employee's birthday >>> ");
        scanf("%d/%s/%d", &birthday, birthMonth, &birthYear);

        // registry all employee's data
        set_name((&effectives[i]), name);
        set_age((&effectives[i]), age);
        set_CPF(&effectives[i], CPF);
        set_cargo(&effectives[i], cargo);
        set_salary(&effectives[i], salary);
        set_birth_date(&effectives[i], birthday, birthMonth, birthYear);

        printf("\n=====%d° employee's data=====\n", i);
        i++;
    } while (i < MAX_EMPLOYEES);

    for (size_t i = 0; i < MAX_EMPLOYEES; i++)
    {
        // print all employee's data
        print(&effectives[i]);
    }

    return 0;
}