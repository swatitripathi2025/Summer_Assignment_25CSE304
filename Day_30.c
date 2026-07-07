#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");

    for(i=0; i<5; i++) {
        printf("\nStudent %d\n", i+1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n----- Student Records -----\n");

    for(i=0; i<5; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}            
#include <stdio.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book b[3];
    int i;

    printf("Enter details of 3 books:\n");

    for(i=0;i<3;i++) {
        printf("\nBook %d\n", i+1);

        printf("Book ID: ");
        scanf("%d",&b[i].id);

        printf("Book Title: ");
        scanf("%s",b[i].title);
    }

    printf("\nLibrary Books:\n");

    for(i=0;i<3;i++) {
        printf("%d\t%s\n",b[i].id,b[i].title);
    }

    return 0;
}

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[3];
    int i;

    printf("Enter Employee Details:\n");

    for(i=0;i<3;i++) {
        printf("\nEmployee %d\n",i+1);

        printf("ID: ");
        scanf("%d",&e[i].id);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nEmployee Records\n");

    for(i=0;i<3;i++) {
        printf("\nID : %d",e[i].id);
        printf("\nName : %s",e[i].name);
        printf("\nSalary : %.2f\n",e[i].salary);
    }

    return 0;
}

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int n) {
    int i;

    for(i=0;i<n;i++) {
        printf("\nStudent %d\n",i+1);

        printf("Roll No: ");
        scanf("%d",&s[i].roll);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
}

void displayStudent(struct Student s[], int n) {
    int i;

    printf("\nStudent Records\n");

    for(i=0;i<n;i++) {
        printf("\nRoll No : %d",s[i].roll);
        printf("\nName : %s",s[i].name);
        printf("\nMarks : %.2f\n",s[i].marks);
    }
}

int main() {
    struct Student s[5];
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                addStudent(s,5);
                break;

            case 2:
                displayStudent(s,5);
                break;

            case 3:
                printf("Thank You!\n");
                break;

                