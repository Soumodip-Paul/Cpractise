#include<stdio.h>
#include<string.h>


struct student
{
    int Roll_number;
    char Name[100];
    char Department[100];
    char Course[200];
    int Year_of_joining;
};


int main(int argc, char const *argv[])
{
    struct student s1;
    strcpy(s1.Name,"Soumodip Paul");
    strcpy(s1.Department,"Chemical Engineering");
    strcpy(s1.Course,"Bachelor of Chemical Engineering");
    s1.Roll_number = 10;
    s1.Year_of_joining = 2020;

    printf("Name : %s\nRoll: %d\nYear of Joining: %d\nCourse: %s\nDepartment: %s",
        s1.Name,
        s1.Roll_number,
        s1.Year_of_joining,
        s1.Course,
        s1.Department);

    return 0;
}
