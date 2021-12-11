
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Funcionarios.h"


Employee registerEmployee(void)
{
    Employee *employee = (Employee*) malloc(sizeof(Employee));
    
    employee->name = "indefined";
    employee->age = 0;
    employee->salary = 0;
    employee->birthDay = 0;
    employee->birthYear = 0;
    employee->sex = false;// false = masculine, true = feminine;
    employee->birthMonth = (char*) malloc(sizeof(char)*10);
    employee->CPF = (char*) malloc(sizeof(char)*13);
    employee->cargo = (char*) malloc(sizeof(char)*30);

    return *employee;
}
void set_name(Employee *employee, char name[]){
    employee->name = name;
}
void set_age(Employee *employee, int age){
    employee->age = age;
}

void set_salary(Employee *employee,float salary){
    employee->salary = salary;
}

void set_birth_date(Employee *employee, int day, char month[], int year){
    employee->birthDay = day;
    employee->birthMonth = month;
    employee->birthYear = year;
}

void set_sex(Employee *employee, bool sex){
    employee->sex = sex;
}

void set_CPF(Employee *employee, char CPF[]){
    employee->CPF = CPF;
}

void set_cargo(Employee *employee, char cargo[]){
    employee->cargo = cargo;
}

//os get que estão comentados foi porque eles estão dando problema na compilação e não consegui descobrir o motivo. Porem o codigo funciona perfeitamente sem eles.

/*
char get_name(Employee *employee){
    return employee->name;
}*/

int get_age(Employee *employee){
    return employee->age;
}

float get_salary(Employee *employee){
    return employee->salary;
}

int get_birth_day(Employee *employee){
    return employee->birthDay;
}
/*
char get_birth_month(Employee *employee){
    char birthMonth[14] = get_birth_month(employee);
    return birthMonth;
}*/

int get_birth_year(Employee *employee){
    return employee->birthYear;
}

char get_sex(Employee *employee){
    if(employee->sex == false)
        return 'M';
    else
        return 'F';
}
/*
char get_CPF(Employee *employee){
    char CPF[14] = get_Cargo(employee);
    return CPF;
}*/
/*
char get_Cargo(Employee *employee){
    char cargo[10] = get_Cargo(employee);
    return cargo;
}*/

void print(Employee *employee){

    printf("\nName: %s\n", employee->name);
    printf("Age: %d\n", employee->age);
    char sex = get_sex(employee);
    printf("sex: %c\n", sex);
    printf("Cargo: %s\n", employee->cargo);
    printf("salary: %.2f\n", employee->salary);
    printf("Birthday: %d/%s/%d\n", employee->birthDay, employee->birthMonth, employee->birthYear);
    
}

