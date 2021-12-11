#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    char *name;
    int age;
    bool sex;
    char *CPF;
    char *cargo;
    float salary;
    int birthDay;
    char *birthMonth;
    int birthYear;

} Employee;

Employee registerEmployee();
void set_name(Employee *employee, char name[]);
void set_age(Employee *employee, int age);
void set_salary(Employee *employee, float wage);
void set_birth_date(Employee *employee, int day, char month[], int year);
void set_sex(Employee *employee, bool sex);
void set_CPF(Employee *employee, char CPF[]);
void set_cargo(Employee *employee, char cargo[]);
char get_name(Employee *employee);
int get_age(Employee *employee);
float get_wage(Employee *employee);
int get_birth_day(Employee *employee);
char get_birth_month(Employee *employee);
int get_birth_year(Employee *employee);
char get_sex(Employee *employee);
char get_CPF(Employee *employee);
char get_Cargo(Employee *employee);
void print(Employee *employee);
