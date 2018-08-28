#include <stdio.h>;
#include <string.h>;

typedef struct {
    int day;
    char month[4];
    int year;
}Date;

typedef struct {
    char name[31];
    int age;
    char gender;
} Student;

void printDate(Date d) {
    printf("%s %d, %d \n",d.month,d.day,d.year);
}

void main() {
    Date dob;
    dob.day = 22;
    strcpy(dob.month,"Nov");
    dob.year = 1996;
    Student stud1;
    strcpy (stud1.name, "David");
    stud1.age = 21;
    stud1.gender = 'M';

    FILE * in = fopen("ch-1-input.txt","r");

  }

