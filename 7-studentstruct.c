#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks1, marks2, marks3, total, percentage;
};

int main() {
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = (s[i].total/3)*100;
    }

    printf("\nStudent Result:\n");

    for(i = 0; i < 5; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}