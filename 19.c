#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i, male = 0, female = 0, highSalary = 0, asstManager = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++) {
        printf("\nEnter details of employee %d\n", i+1);
        scanf("%s %s %c %s %f",
              e[i].name, e[i].designation,
              &e[i].gender, e[i].doj, &e[i].salary);

        if(e[i].gender == 'M')
            male++;
        else if(e[i].gender == 'F')
            female++;

        if(e[i].salary > 10000)
            highSalary++;

        if(strcmp(e[i].designation, "AsstManager") == 0)
            asstManager++;
    }

    printf("\nTotal employees = %d", n);
    printf("\nMale = %d, Female = %d", male, female);
    printf("\nSalary > 10000 = %d", highSalary);
    printf("\nAsst Manager = %d", asstManager);

    return 0;
}
